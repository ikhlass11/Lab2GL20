#include <iostream>
#include <list>
#include <cstring>
#include <string>
using namespace std;

#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1
{
private:
    static const int tailleTableau = 10;
    list<pair<string, string>> table[tailleTableau];

public:
    int HASH(string cle);
    //void ajouterItem(string nom, string tel);
    //void afficherItem();
    //int nombreItems(int index);
    //void afficherItemsDansIndex(int index);
    void chercherItem(string nom);
    void supprimerItem(string nom);
};

#endif // HASH_H_INCLUDED
