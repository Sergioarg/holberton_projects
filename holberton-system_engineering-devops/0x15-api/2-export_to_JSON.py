#!/usr/bin/python3
""" REST API for get the information of specific user """
import json
from sys import argv
import requests

if __name__ == "__main__":
    """ Export data in the CSV format."""
    user_id = argv[1]
    file_name = user_id + ".json"

    user_url = "https://jsonplaceholder.typicode.com/users/{}".format(user_id)
    todo_url = "https://jsonplaceholder.typicode.com/users/{}/todos".format(
        user_id)

    user_info = requests.get(url=user_url).json()
    todo_info = requests.get(url=todo_url).json()

    user_dict = {}
    todo_list = []

    for todo in todo_info:
        task_dict = {}
        task_dict["task"] = todo.get("title")
        task_dict["completed"] = todo.get("completed")
        task_dict["username"] = user_info.get("username")
        todo_list.append(task_dict)

    user_dict[user_id] = todo_list

    with open(file=file_name, mode="w") as file:
        json.dump(user_dict, file)
