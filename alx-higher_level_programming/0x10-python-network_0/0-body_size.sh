#!/bin/bash
# displays the size of the body of the response in bytes
curl -sI "$1" | grep -i Content-Length | cut -d ' ' -f2
