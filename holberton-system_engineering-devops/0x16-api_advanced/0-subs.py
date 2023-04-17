#!/usr/bin/python3
""" Get the numbers of subscribers of reddit """
import requests


def number_of_subscribers(subreddit):
    """ Returns the number of subscribers """
    reddit_url = "https://www.reddit.com/r/{}/about.json".format(subreddit)

    header = {"User-Agent": "Mozilla/5.0"}

    res_reddit = requests.get(
        url=reddit_url, headers=header, allow_redirects=False)

    if res_reddit.status_code >= 300:
        return (0)

    return res_reddit.json().get("data").get("subscribers")
