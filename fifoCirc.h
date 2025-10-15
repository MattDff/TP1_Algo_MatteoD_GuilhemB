//
// Created by mdoffe on 29/09/2025.
//

#ifndef TD1_FIFOCIRC_H
#define TD1_FIFOCIRC_H


class fifoCirc {
    int max = 10000;
    int* queue;
    int front, rear, i, n;
public:
    fifoCirc();
    ~fifoCirc(){}

    void push(int x);
    int pop();
};


#endif //TD1_FIFOCIRC_H