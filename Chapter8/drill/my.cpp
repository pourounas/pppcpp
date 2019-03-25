#include "my.h"
#include<iostream>

int foo = 8; // if you don't define (assign value to foo) here you get compiler errors.

void print_foo()
{
    std::cout << foo << '\n';
}

void print(int i)
{
    std::cout << i << '\n';
}