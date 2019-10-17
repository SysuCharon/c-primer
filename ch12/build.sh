# !/bin/bash

g++ -std=c++11 -c text_query.cpp
g++ -std=c++11 -c main.cpp
g++ -std=c++11 text_query.o main.o -o test

