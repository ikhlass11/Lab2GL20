#include <iostream>
#include <string>
#include "hash.h"

using namespace std;

int hash1::HASH(string cle)
{
    int index;
    int hashage = 0;
    for (int i = 0; i < cle.length(); i++)
    {
        hashage = hashage + (int)cle[i];
    }
    index = hashage % tailleTableau;

    return index;
}

void hash1::chercherItem(string nom)
{
    bool itemFound = false;
    int index = HASH(nom);
    auto bItr = table[index].begin();
    for (; bItr != table[index].end(); bItr++)
    {
        if (bItr->first == nom)
        {
            cout << "Cetter personne exist dans la table" << endl;
            itemFound = true;
        }
    }
    if (!itemFound)
        cout << "Cetter personne n'existe pas dans la table" << endl;
    return;
}

void hash1::supprimerItem(string nom)
{
    int hashValue = HASH(nom);
    auto &cell = table[hashValue];
    auto bItr = begin(cell);
    bool keyExists = false;
    for (; bItr != end(cell); bItr++)
    {
        if (bItr->first == nom)
        {
            keyExists = true;
            bItr = cell.erase(bItr);
            cout << "La personne " << nom << "a ete enlevee" << endl;
            break;
        }
    }

    if (!keyExists)
        cout << "[WARNING] Cette personne n'a pas ete trouve" << endl;

    return;
}