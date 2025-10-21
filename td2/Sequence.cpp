//
// Created by guilhem on 15/10/2025.
//

#include "Sequence.h"

Sequence::Sequence(int set_size):set_size(set_size){}



vector<int> Sequence::getMonotonicSequence(vector<int> set, int index) {
    if (set.empty()) {
        return {}; // Retournez un vecteur vide si l'ensemble est vide
    }

    if (index == 0) {
        MonoSeq.push_back({set[0]});
        size++;
    }

    else if (index > set_size - 1) {
        int index_max = 0;
        unsigned long max = 0;
        for (int i = 0; i < size; i++) {
            vector<int> seq = MonoSeq[i];
            if (seq.size() > max) {
                index_max = i;
                max = MonoSeq[i].size();
            }
        }
        return MonoSeq[index_max];
    }
    else if (index <= set_size - 1 && index > 0) {
        int mem_size = size;
        for (int i = 0; i < size; i++)
        {
            vector<int> Seq = MonoSeq[i];
            if (Seq.back() <= set[index]) {
                cout << "Passage dans la boucle d'ajout d'élément" << endl; //Ligne de test pour voir les passage en boucles
                //Commentaire:
                //Lors de l'exécution, on se rend compte que cette ligne est atteinte beaucoup trop souvent, on devrait noramlement avoir 15 occurations avec l'exemple donné.
                //Par ailleurs si on modifie un peu l'exemple, on peut facilement atteindre un nombre d'occurations infini!!
                //Il y a donc un sérieux problème dans cette partie du code mais nous n'arrivons pas à la corriger


                //Copie de la séquence dans laquelle l'élément peut être ajouté
                vector<int> newSeq = Seq;
                //Ajout de l'élément à la copie
                newSeq.push_back(set[index]);
                //Ajout de la nouvelle séquence dans le registre des séquences
                MonoSeq.push_back(newSeq);
                size++;
            }
        }
        /*
        //Attention en ajoutant cette dernière partie du code, l'exécution devient une boucle infinie et fait planter CLion!!
        //Si l'élément ne peut être ajouté à aucune séquence, on crée une nouvelle séquence commencant par lui
        if (mem_size == size)
        {
            cout << "Passage dans la boucle d'ajout d'élément" << endl;  //Ligne de test pour voir les passage en boucle dans la console
            vector<int> newSeq = {set[index]};
            //Ajout de la nouvelle séquence dans le registre des séquences
            MonoSeq.push_back(newSeq);
            size++;
        }
        */
    }
    return getMonotonicSequence(set, index + 1);
}

