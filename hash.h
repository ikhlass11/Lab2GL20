#ifndef HASH_H_INCLUDED
#define HASH_H_INCLUDED

class hash1{
    private:
        static const int tailleTableau = 10;
        list<pair<string,string>> table[tailleTableau];


    public:

        void afficherItemsDansIndex(int index);


};

#endif // HASH_H_INCLUDED

