#!/usr/bin/python3

"""Prints the first State object from the database hbtn_0e_6_usa"""

import sqlalchemy
from sqlalchemy import create_engine
from sqlalchemy.orm import sessionmaker
from model_state import Base, State
from sqlalchemy import Column, Integer, String
from sys import argv

if __name__ == "__main__":
    engine = create_engine(
            'mysql+mysqldb://{}:{}@localhost/{}'.format(argv[1],
                                                        argv[2],
                                                        argv[3]))
    Base.metadata.create_all(engine)
    Session = sessionmaker(bind=engine)
    session = Session()
    first_state = session.query(State).order_by(State.id).first()
    if first_state is not None:
        print("{}: {}".format(state.id, state.name))
    else:
        print("Nothing")
    session.close()
