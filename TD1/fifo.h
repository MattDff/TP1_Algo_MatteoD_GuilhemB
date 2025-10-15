//
// Created by mdoffe on 29/09/2025.
//

#ifndef TD1_FIFO_H
#define TD1_FIFO_H


class fifo {
    int max = 1000;
    int* queue;
    int front, rear;
public:
    fifo();
    ~fifo(){}

    void push(int x);
    int pop();
};


#endif //TD1_FIFO_H