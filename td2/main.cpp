#include <iostream>
#include "PGCD.h"
#include "Sequence.h"

int main()
{
    PGCD pgcd = PGCD();
    int test = pgcd.getPgcd(21,15,2);
    printf("Le PGCD est: %d \n\r", test);

    vector<int> set = {4,5,1,2,3,7};
    vector<int> seq_test(set.begin()+6,set.end());
    if (seq_test.size()<=0)
    {
        printf("Le set est vide");
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


    Sequence sequence = Sequence(6);
    vector<int> test_seq = {4,5,1,2,3,7};
    vector<int> result_test = sequence.getMonotonicSequence(test_seq, 0);
    cout << "La séquence monotone la plus longue est: ";
    for (int i = 0; i < result_test.size(); i++){
        cout << result_test[i] << " ";
    }
    cout << endl;
    return 0;
}
