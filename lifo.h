//
// Created by mdoffe on 29/09/2025.
//

#ifndef TD1_LIFO_H
#define TD1_LIFO_H


class lifo {
private :
    int max = 1000;
    int* stack;
    int top;
public:
    lifo();

    void push(int value);
    int pop();
};


#endif //TD1_LIFO_H