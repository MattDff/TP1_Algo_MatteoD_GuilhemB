//
// Created by mdoffe on 15/10/2025.
//

#include "tasMin.h"

#include <iostream>

size_t tasMin::parent(size_t i) const {
    return (i-1)/2;
}

size_t tasMin::leftChild(size_t i) const {
    return i*2+1;
}

size_t tasMin::rightChild(size_t i) const {
    return i*2+2;
}

void tasMin::moveUp(size_t i) {
    size_t p = parent(i);
    if (p >= heap.size()) {
        return;
    }
    if (heap[p] > heap[i]) {
        std::swap(heap[i], heap[p]);
        moveUp(p);
    }
}

void tasMin::moveDown(size_t i) {
    size_t j = i;
    size_t l = leftChild(i);
    size_t r = rightChild(i);
    if (l < heap.size() && heap[l] < heap[j] ) {
        j = l;
    }
    if (r < heap.size() && heap[r] < heap[j] ) {
        j = r;
    }
    if (j != i) {
        std::swap(heap[i], heap[j]);
        moveDown(j);
    }
}

void tasMin::push(int x) {
    heap.push_back(x);
    moveUp(heap.size() - 1);
}

int tasMin::pop() {
    if (heap.size() == 0) {
        std::cout << "empty heap" << std::endl;
    }
    else {
        int x = heap[0];
        std::swap(heap[0], heap.back());
        heap.pop_back();
        moveDown(0);
        return x;
    }
}
