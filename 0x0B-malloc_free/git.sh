#!/bin/bash

echo "Input your commit message"
read COMMIT

git add . && git commit -m "$COMMIT" && git push
