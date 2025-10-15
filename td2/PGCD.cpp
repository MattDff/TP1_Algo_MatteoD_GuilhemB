//
// Created by guilhem on 15/10/2025.
//
#include <iostream>
#include "PGCD.h"
using namespace std;

int PGCD::getPgcd(int a, int b, int index)
{
    if (a%index == 0 && b%index == 0)
    {
        pgcd = index;
    }
    else if (index >= std::min(a,b))
    {
        return pgcd;
    }

    index++;
    return getPgcd(a,b,index);

}

PGCD::~PGCD()
{
    cout << "Destruction de pgcd" << endl;
}