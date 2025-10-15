//
// Created by mdoffe on 15/10/2025.
//

#ifndef TD1_TAXMIN_H
#define TD1_TAXMIN_H
#include <vector>


class tasMin {
    std::vector<int> heap;

    size_t parent(size_t i) const;
    size_t leftChild(size_t i) const;
    size_t rightChild(size_t i) const;

    void moveUp(size_t i);
    void moveDown(size_t i);

public:
    void push(int x);
    int pop();
};


#endif //TD1_TAXMIN_H