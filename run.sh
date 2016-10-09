g++ -finstrument-functions -g -c -o main.o main.cpp
gcc -c -o trace.o trace.c
g++ main.o trace.o -o main
./main

./readtracelog.sh main trace.out
