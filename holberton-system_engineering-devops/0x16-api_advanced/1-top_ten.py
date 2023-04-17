#!/usr/bin/python3
""" Get the numbers of subscribers of reddit """
import requests


def top_ten(subreddit):
    """ Prints the titles of the first 10 hot posts. """
    r_url = "https://www.reddit.com/r/{}/hot.json?limit=10".format(subreddit)

    header = {"User-Agent": "Mozilla/5.0"}

    res_reddit = requests.get(
        url=r_url, headers=header, allow_redirects=False)

    if res_reddit.status_code >= 300:
        print("None")
    else:
        for top in res_reddit.json().get("data").get("children"):
            print(top.get("data").get("title"))
