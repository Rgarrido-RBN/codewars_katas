#!/bin/bash

set -e

g++ main.cpp -o spinWords

./spinWords >> log.txt | xargs cat log.txt
