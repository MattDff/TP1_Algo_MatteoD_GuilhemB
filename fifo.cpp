//
// Created by mdoffe on 29/09/2025.
//

#include "fifo.h"

#include <iostream>
#include <ostream>

fifo::fifo() {
    front = 1;
    rear = 0;
    queue = new int(max);
}

void fifo::push(int x) {
    if (rear == max) {
        std::cout << "List is full" << std::endl;
    }
    else {
        queue[++rear] = x;
    }
}

int fifo::pop() {
    if (front > rear) {
        std::cout << "List is empty" << std::endl;
    }
    else {
        return queue[front++];
    }
}

