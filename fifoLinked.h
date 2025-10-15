//
// Created by mdoffe on 15/10/2025.
//

#ifndef TD1_FIFOLINKED_H
#define TD1_FIFOLINKED_H


class fifoLinked {
    class node {
    public:
        int x;
        node *next;
        node(int x, node *next);
    };
    node *front;
    node *rear;
public:
    fifoLinked();
    ~fifoLinked(){}
    void push(int x);
    int pop();
};


#endif //TD1_FIFOLINKED_H