#!/usr/bin/python3
""" REST API for get the information of specific user """
import requests
from sys import argv

if __name__ == "__main__":
    """ Export data in the CSV format."""
    user_id = argv[1]

    user_url = "https://jsonplaceholder.typicode.com/users/{}".format(user_id)

    todo_url = "https://jsonplaceholder.typicode.com/users/{}/todos".format(
        user_id)

    user_info = requests.get(url=user_url).json()
    todo_info = requests.get(url=todo_url).json()

    file_name = user_id + ".csv"

    with open(file=file_name, mode="w") as file:

        for taks in todo_info:
            file.write('"{}","{}","{}","{}"\n'.format(
                user_info.get("id"),
                user_info.get("username"),
                taks.get("completed"),
                taks.get("title")
            ))
