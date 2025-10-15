//
// Created by mdoffe on 29/09/2025.
//

#include "fifoCirc.h"

#include <iostream>
#include <ostream>


fifoCirc::fifoCirc() {
    front = 1;
    rear = max-1;
    n = 0;
    queue = new int(max);
}

void fifoCirc::push(int x) {
    if (n == max ) {
        std::cout << "Queue is full" << std::endl;
    }
    else {
        rear = (rear + 1) % max;
        queue[rear] = x;
        n++;
    }
}

int fifoCirc::pop() {
    int pop;
    if (n == 0) {
        std::cout << "List is empty" << std::endl;
    }
    else {
        pop =  queue[front];
        front = (front + 1) % max;
        n--;
        return pop;
    }
}