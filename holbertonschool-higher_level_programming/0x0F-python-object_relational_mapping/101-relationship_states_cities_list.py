#!/usr/bin/python3
"""
Lists all State objects, and corresponding City objects,
 contained in the database hbtn_0e_101_usa
"""
import sys
from sqlalchemy.orm import sessionmaker
from sqlalchemy import (create_engine)
from relationship_state import Base, State
from relationship_city import Base, City


if __name__ == "__main__":

    user, passwd, db_name = sys.argv[1], sys.argv[2], sys.argv[3]

    engine = create_engine('mysql+mysqldb://{}:{}@localhost:3306/{}'.format(
        user, passwd, db_name), pool_pre_ping=True)

    Session = sessionmaker(bind=engine)
    session = Session()

    all_states = session.query(State).order_by(State.id).all()

    for state in all_states:
        print("{:d}: {:s}".format(state.id, state.name))
        for city in state.cities:
            print("\t{:d}: {:s}".format(city.id, city.name))

    session.close()
