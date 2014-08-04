#!/bin/bash

g++ -I. -I$SYSTEMC_HOME/include -L. -L$SYSTEMC_HOME/lib-linux64 -o out hello.cpp -lsystemc -lm
