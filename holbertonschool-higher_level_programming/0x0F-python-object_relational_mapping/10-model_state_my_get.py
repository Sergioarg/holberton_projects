#!/usr/bin/python3
"""Print a state with specicific name
"""
import sys
from model_state import Base, State
from sqlalchemy.orm import Session, sessionmaker
from sqlalchemy import (create_engine)

if __name__ == "__main__":

    name_search = sys.argv[4]

    engine = create_engine('mysql+mysqldb://{}:{}@localhost:3306/{}'.format(
        sys.argv[1], sys.argv[2], sys.argv[3]), pool_pre_ping=True)

    Session = sessionmaker(bind=engine)
    session = Session()

    state = session.query(State).order_by(State.id).filter(
        State.name == name_search).first()

    if state:
        print(state.id)
    else:
        print("Not found")
    session.close()
