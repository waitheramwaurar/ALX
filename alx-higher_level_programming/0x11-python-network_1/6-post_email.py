#!/usr/bin/python3
"""
This script takes in a URL and an email address,
sends a POST request to the passed URL with email as a parameter,
and finally displays the body of the response
"""

from sys import argv
import requests

if __name__ == "__main__":
    url = argv[1]
    value = {"email": argv[2]}

    r = requests.post(url, data=value)
    print(r.text)
