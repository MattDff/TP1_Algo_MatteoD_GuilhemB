//
// Created by mdoffe on 15/10/2025.
//

#include "fifoLinked.h"

#include <iostream>
#include <ostream>

fifoLinked::node::node(int x, node *next)
    : x(x), next(next) {
}

fifoLinked::fifoLinked() {
    front = nullptr;
    rear = nullptr;
}

void fifoLinked::push(int x) {
    node *p = new node(x, nullptr);
    if (front == nullptr) {
        front = p;
        rear = p;
    }
    else {
        rear->next = p;
        rear = p;
    }
}

int fifoLinked::pop() {
    if (front == nullptr) {
        std::cout << "Empty fifoLinked" << std::endl;
    }
    else {
        int popped = front->x;
        node *p = front->next;
        delete front;
        front = p;
        return popped;
    }
}
