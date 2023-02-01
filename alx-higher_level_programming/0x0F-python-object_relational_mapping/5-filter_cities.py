#!/usr/bin/python3

"""
Takes the name of a state as an argument and lists all the cities
of that state using the database hbtn_0e_4_usa
SQL injection free
"""

if __name__ = "__main__":
    import MySQLdb
    import sys

    db = MySQLdb.connect(host='localhost', port=3306, user=sys.argv[1],
                     passwd=sys.argv[2], db=sys.argv[3], charset='utf8')
    cur = db.cursor()
    cur.execute("SELECT cities.name FROM cities
                JOIN states ON cities.states_id = states.id
                WHERE states.name LIKE %s
                ORDER BY cities.id ASC",(sys.argv[4],))
    cities = cur.fetchall()
    for city in cities:
        print(", ".join(city[0]))
    cur.close()
    db.close()
