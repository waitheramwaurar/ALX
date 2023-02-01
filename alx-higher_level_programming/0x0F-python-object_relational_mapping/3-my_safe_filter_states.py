#!/usr/bin/python3

"""Takes in arguments and displays all values in the states
table of hbtn_0e_0_usa where name matches the argument"""

if __name__ == "__main__":
    import MySQLdb as sql
    import sys

    db = sql.connect(host='localhost', port=3306, user=sys.argv[1],
                     passwd=sys.argv[2], db=sys.argv[3])
    cur = db.cursor()
    cur.execute("SELECT * FROM states WHERE name=%s'\
                ORDER BY states.id ASC".format(sys.argv[4]))
    states = cur.fetchall()
    for state in states:
        print(state)
