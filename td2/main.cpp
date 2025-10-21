#include <iostream>
#include "PGCD.h"
#include "Sequence.h"

int main()
{
    PGCD pgcd = PGCD();
    int test = pgcd.getPgcd(15,21);
    printf("Le PGCD est: %d \n\r", test);

    /*
    //test pour voir comment fonctionne .begin() et .end()
    vector<int> set = {4,5,1,2,3,9,7,8};
    vector<int> seq_test(set.begin()+6,set.end());
    if (seq_test.size()<=0)
    {
        printf("Le set est vide\n\r");
    }
    else
    {
        printf("Le nouveau set est: ");
        for (int i = 0; i < seq_test.size(); i++)
        {
            cout << seq_test[i] << " ";
        }
        cout << endl;
    }
    */

    // Test du repérage de la plus longue séquence monotone
    vector<int> set = {4,5,1,2,3,9,7,8};
    int seq_size = set.size();
    Sequence sequence = Sequence(seq_size);
    cout << "Debut de la recherche de la séquence la plus longue du set" << endl;
    vector<int> result_test = sequence.getMonotonicSequence(set, 0);
    cout << "La séquence monotone la plus longue est: ";
    for (int i : result_test){
        cout << i << " ";
    }
    cout << endl;

    return 0;
};
