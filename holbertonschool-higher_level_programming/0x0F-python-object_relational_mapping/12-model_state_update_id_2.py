#!/usr/bin/python3
"""Print a state with specicific name
"""
import sys
from model_state import Base, State
from sqlalchemy.orm import Session, sessionmaker
from sqlalchemy import (create_engine)

if __name__ == "__main__":

    user, passwd, db_name = sys.argv[1], sys.argv[2], sys.argv[3]

    engine = create_engine('mysql+mysqldb://{}:{}@localhost:3306/{}'.format(
        user, passwd, db_name), pool_pre_ping=True)

    Session = sessionmaker(bind=engine)
    session = Session()

    change_state = session.query(State).filter_by(id=2).first()
    change_state.name = "New Mexico"
    session.commit()

    session.close()
