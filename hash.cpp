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

int hash1::nombreItems(int index) {
    int nbreItem{};
    for (int i{}; i<tailleTableau; i++) {
        if (table[i].size() == 0) continue;
        
        auto bItr = table[i].begin();
        for (; bItr != table[i].end(); bItr++) nbreItem++;
    }
    return nbreItem;
}

