# Better Constructors

In this tutorial we go over how to create a constructor which can accept parameters.

**You cannot use SC_CTOR if you would like constructors with parameters.**

## Procedure


There are three things you usually want to do when making such constructors:

1. create a default constructor
ur_module_name (sc_module_name _n) : sc_module(_n) {
// default constructor here
}

2. create other constructors that can take additional parameters
ur_module_name (sc_module_name _n, int _magic_number) : sc_module(_n), magic_number(_magic_number) {
// constructor stuff here
}


3. make sure to do this
```c++
  SC_HAS_PROCESS(ur_module_name);
```
