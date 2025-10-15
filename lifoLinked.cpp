//
// Created by mdoffe on 29/09/2025.
//

#include "lifoLinked.h"

#include <iostream>
#include <ostream>
#include <utility>

lifoLinked::node::node(int x, node *next)
    : x(x), next(next) {
}

lifoLinked::lifoLinked() {
    head = nullptr;
}

void lifoLinked::push(int x) {
    if (head == nullptr) {
        head = new node(x, nullptr);
    }
    else {
        head = new node(x, head);
    }
}

int lifoLinked::pop() {
    if (head == nullptr) {
        std::cout << "Empty list" << std::endl;
        return 0;
    }
    else {
        int value = head->x;
        node* oldHead = head;
        head = head->next;
        delete oldHead;
        return value;
    }
}