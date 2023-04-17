#!/usr/bin/python3
""" REST API for get the information of specific user """
import json
import requests

if __name__ == "__main__":
    """ Export data in the CSV format."""
    file_name = "todo_all_employees.json"

    user_url = "https://jsonplaceholder.typicode.com/users/"
    todo_url = "https://jsonplaceholder.typicode.com/users/"

    user_info = requests.get(url=user_url).json()
    todo_info = requests.get(url=todo_url).json()

    user_dict = {}
    todo_list = []

    for todo in todo_info:
        task_dict = {}
        task_dict["task"] = todo.get("title")
        task_dict["completed"] = todo.get("completed")
        # task_dict["username"] = user_info.get("username")
        todo_list.append(task_dict)

    user_dict[user_info.get("id")] = todo_list

    with open(file=file_name, mode="w") as file:
        json.dump(user_dict, file)
