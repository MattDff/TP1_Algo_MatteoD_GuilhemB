//
// Created by mdoffe on 29/09/2025.
//

#include "lifo.h"

#include <iostream>
#include <ostream>

lifo::lifo() {
    top = 0;
    stack = new int[max];
}

void lifo::push(int value) {
    if (top == max) {
        std::cout << "Stack is full" << std::endl;
    }
    else {
        stack[top++] = value;
    }
}

int lifo::pop() {
    if (top == 0) {
        std::cout << "Stack is empty" << std::endl;
        return 0;
    }
    else {
        return stack[--top];
    }
}



