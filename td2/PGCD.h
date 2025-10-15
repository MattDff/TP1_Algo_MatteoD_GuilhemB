//
// Created by guilhem on 15/10/2025.
//

#ifndef TPS_ALGO_PGCD_H
#define TPS_ALGO_PGCD_H


class PGCD{
protected:
    int pgcd = 1;
public:
    PGCD() = default;
    int getPgcd(int a, int b,int index);
    ~PGCD();
};


#endif //TPS_ALGO_PGCD_H