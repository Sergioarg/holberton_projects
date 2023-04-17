#!/usr/bin/python3
""" REST API for get the information of specific user """
import requests
from sys import argv


if __name__ == "__main__":
    """ Print info by specific id """
    user_id = argv[1]

    user_url = "https://jsonplaceholder.typicode.com/users/{}".format(user_id)
    user_info = requests.get(url=user_url).json()

    todo_url = "https://jsonplaceholder.typicode.com/todos"
    todo_info = requests.get(url=todo_url).json()

    name = user_info.get("name")
    count_todo = 0
    completed_todo = 0
    tasks_completed = []

    for todo in todo_info:
        if todo.get("userId") == int(user_id):
            count_todo += 1
            if todo.get("completed"):
                completed_todo += 1
                tasks_completed.append(todo.get("title"))

    print("Employee {} is done with tasks({}/{}):"
          .format(name, completed_todo, count_todo))

    for task in tasks_completed:
        print('\t', task)
