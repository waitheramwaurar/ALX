#!/usr/bin/python3

"""Class definition of State and an instance Base"""
import sys
from model_state import Base, State

from sqlalchemy import (create_engine)

if __name__ == "__main__":
    arg = sys.argv
    engine = create_engine('mysql+mysqldb://{}:{}@localhost/{}'.format(arg[1], arg[2], arg[3]), pool_pre_ping=True)
    Base.metadata.create_all(engine)
