//
// Created by guilhem on 15/10/2025.
//

#include "Sequence.h"

Sequence::Sequence(int set_size):set_size(set_size){}

/*
vector<int> Sequence::getMonotonicSequence(vector<int> set, int index)
{
    if (set.size()==0)
        if (index >= 2){
            {
                int index_max = 0;
                unsigned long max = 1;
                for (int i = 0; i < size; i++)
                {
                    if (MonoSeq[i].size() >= max)
                    {
                        index_max = i;
                        max = MonoSeq[i].size();
                    }
                }
                return MonoSeq[index_max];
            }
        }
        else
        {
            cerr<<"Set vide"<<endl;
            return MonoSeq[0];
        }
    if (index <=0)
    {
        MonoSeq[0].push_back(set[0]);
        size ++;
    }

    else{
        for(int i=0; i<size; i++)
        {
            if(set[0] >= MonoSeq[i].back())
            {
                vector<int> newSeq = MonoSeq[i];
                newSeq.push_back(set[0]);
                MonoSeq.push_back(newSeq);
                size ++;
            }
        }
    }
    vector<int> newset(set.begin()+1, set.end());
    index ++;
    return getMonotonicSequence(newset, index);

}
*/
vector<int> Sequence::getMonotonicSequence(vector<int> set, int index) {
    // Vérifiez si l'ensemble est vide
    if (set.empty()) {
        return {}; // Retournez un vecteur vide si l'ensemble est vide
    }

    // Initialisation de la première séquence
    if (index == 0) {
        MonoSeq.push_back({set[0]});
        size++;
    }
    // Condition de fin
    else if (index >= set.size()) {
        int index_max = 0;
        unsigned long max = 0; // Initialisez max à 0
        for (int i = 0; i < size; i++) {
            if (MonoSeq[i].size() > max) {
                index_max = i;
                max = MonoSeq[i].size();
            }
        }
        return MonoSeq[index_max];
    }
    else {
        // Vérifier l'ajout de nouvelles séquences monotones
        for (int i = 0; i < size; i++) {
            // Vérifiez que MonoSeq[i] n'est pas vide avant d'accéder à son dernier élément
            if (!MonoSeq[i].empty() && MonoSeq[i].back() <= set[index]) {
                vector<int> newSeq = MonoSeq[i];
                newSeq.push_back(set[index]);
                MonoSeq.push_back(newSeq);
                size++;
            }
        }
    }

    // Créer un nouveau sous-ensemble à partir de l'index suivant
    vector<int> newset(set.begin() + index + 1, set.end());
    return getMonotonicSequence(newset, index + 1);
}

