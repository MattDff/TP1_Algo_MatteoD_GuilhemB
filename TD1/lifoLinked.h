//
// Created by mdoffe on 29/09/2025.
//

#ifndef TD1_LIFOLINKED_H
#define TD1_LIFOLINKED_H


class lifoLinked {
    class node {
        public:
        int x;
        node *next;
        node(int x, node *next);
    };
    node *head;
public:
    lifoLinked();
    ~lifoLinked(){}
    void push(int x);
    int pop();
};


#endif //TD1_LIFOLINKED_H