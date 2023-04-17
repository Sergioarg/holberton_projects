#!/usr/bin/python3
""" Get the numbers of subscribers of reddit """
import requests


def recurse(subreddit, hot_list=[], count=0, after='None'):
    """ Returns a list containing the titles of all hot articles  """
    r_url = "https://www.reddit.com/r/{}/hot.json".format(subreddit)

    header = {"User-Agent": "Mozilla/5.0"}
    param = {"count": count, "after": after}

    res_reddit = requests.get(
        url=r_url, params=param, headers=header, allow_redirects=False)

    if res_reddit.status_code != 200:
        return (None)

    data_children = res_reddit.json().get("data").get("children")

    h_list = hot_list + [top.get("data").get("title")
                         for top in data_children]

    reddit_info = res_reddit.json()

    if not reddit_info.get("data").get("after"):
        return (h_list)

    data_count = reddit_info.get("data").get("count")
    data_after = reddit_info.get("data").get("after")

    return recurse(subreddit, h_list, data_count, data_after)
