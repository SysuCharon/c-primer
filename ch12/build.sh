# !/bin/bash

g++ -std=c++11 -w -g -c query_result.cpp
g++ -std=c++11 -w -g -c text_query.cpp
g++ -std=c++11 -w -g -c main.cpp
g++ -std=c++11 -w -g query_result.o text_query.o main.o -o test

