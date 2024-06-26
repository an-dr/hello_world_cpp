// Copyright (c) 2024 Andrei Gramakov. All rights reserved.

#include "main.hpp"
#include <cstdio>
#include <iostream>
#include <vector>
#include "project_include.h"
#include "project_include.hpp"

class Hello {
 public:
    void sayHelloWorld() { sayHello("World"); }

    void sayHelloSomething(const char *smth) { sayHello(smth); }

 private:
    void sayHello(const char *smth) { printf("Hello, %s!\n", smth); }
};

int main(int argc, char *argv[]) {
    Hello talker;
    if (argc > 1) {
        talker.sayHelloSomething(argv[1]);
    } else {
        talker.sayHelloWorld();
    }
    return 0;
}
