//
// Created by guilhem on 15/10/2025.
//
#include <iostream>
#include <vector>
using namespace std;
#ifndef TPS_ALGO_SEQUENCE_H
#define TPS_ALGO_SEQUENCE_H


class Sequence
{
protected:
    int set_size;
    unsigned long size; //Taille du vecteur MonoSeq qui mémorise les chaînes au fur et à mesure
    vector<vector<int>> MonoSeq;


public:
    Sequence(int set_size);
    vector<int> getMonotonicSequence(vector<int> set, int index);
};


#endif //TPS_ALGO_SEQUENCE_H