#include <iostream>
#include <list>
#include <cstring>
#include <string>
using namespace std;

#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1{
    private:
        static const int tailleTableau = 10;
        list<pair<string,string>> table[tailleTableau];


    public:
        int HASH(string cle);  //Done
        void ajouterItem(string nom, string tel); //Done
        void afficherItem(); //Done

};

#endif // HASH_H_INCLUDED
