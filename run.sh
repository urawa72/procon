#!/bin/sh

docker build -t clang_base .
docker run -v $(pwd)/src:/app --rm -it clang_base:latest
