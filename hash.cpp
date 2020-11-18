#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash1::HASH(string cle)
{
    int index;
    int hashage = 0;
    for(int i = 0; i< cle.length(); i++)
    {
        hashage = hashage + (int)cle[i];
    }
    index = hashage % tailleTableau;

    return index;
}



void hash1::afficherItemsDansIndex(int index) {
    if (table[index].size() == 0) {
        cout << "Aucun element dans cet indice" << endl;
    }
    else {
        auto bItr = table[index].begin();
        for (; bItr != table[index].end(); bItr++) {
            cout << "Le nom est : " << bItr->first << " et le numero de tel est : " << bItr->second << endl;
        }
    }
}



    return;
}
