//
// Created by guilhem on 15/10/2025.
//
#include <iostream>
#include "PGCD.h"
using namespace std;

int PGCD::getPgcd(int a, int b)
{
    int reste = max (a,b) % min(a,b);
    if (reste == 0 || min(a,b)==1)
    {
        return min(a,b);
    }
    return getPgcd(max(a,b) , reste);

}

PGCD::~PGCD()
{
    cout << "Destruction de pgcd" << endl;
}