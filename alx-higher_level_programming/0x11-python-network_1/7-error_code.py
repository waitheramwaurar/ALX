#!/usr/bin/python3
"""
This script takes in a URL, sends a request to the URL,
and displays the body of the response
If the HTTP code is greater than or equal to 400,
print: Error code: followed by the HTTP status code
"""

from sys import argv
import requests

if __name__ == "__main__":
    r = requests.get(argv[1])
    status = r.status_code

    if status >= 400:
        print("Error code: {}".format(status))
    else:
        print(r.text)
