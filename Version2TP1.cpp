#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

struct item
{
    string nom;
    string tel;
    item *next;
};

item *HashTable[10] = {NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL}, *c;

int HASH(string cle)
{
    int index;
    int hashage = 0;
    for (int i = 0; i < cle.length(); i++)
    {
        hashage = hashage + (int)cle[i];
    }
    index = hashage % 10;
    return index;
}
void ajouteritem()
{
    int i;
    string key;
    string numero;
    cout << "entrer a name into hash table" << endl;
    cin >> key;
    cout << "entrer a phone number " << endl;
    cin >> numero;
    i = HASH(key);
    item *newitem = (item *)malloc(sizeof(item));
    newitem->nom = key;
    newitem->tel = numero;
    newitem->next = NULL;
    if (HashTable[i] == NULL)
    {
        HashTable[i] = newitem;
    }
    else
    {
        c = HashTable[i];
        while (c->next != NULL)
        {
            c = c->next;
        }
        c->next = newitem;
    }
}

void chercheritem()
{
    int index;
    string key;
    cout << "entrer a name to search into hash table" << endl;
    cin >> key;
    index = HASH(key);
    if (HashTable[index] == NULL)
    {
        cout << "Search element not found" << endl;
    }
    else
    {
        for (c = HashTable[index]; c != NULL; c = c->next)
        {
            if (c->nom == key)
            {
                cout << "Search element found in the liste at index " << index << endl;
                break;
            }
        }
        if (c == NULL)
        {
            cout << "search element not found" << endl;
        }
    }
}

void afficheritem()
{
    int i;
    for (i = 0; i < 10; i++)
    {
        cout << endl;
        if (HashTable[i] == NULL)
        {
            cout << "La case " << i << " is Empty";
            continue;
        }
        else
        {
            for (c = HashTable[i]; c != NULL; c = c->next)
            {
                cout << "-> {" << c->nom << ":" << c->tel << "}";
            }
        }
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int opt;
    string key;
    while (1)
    {
        cout << "press 1. ajouter\t 2.afficheritem \t 3.Search \t 4.Exit " << endl;
        cin >> opt;
        switch (opt)
        {
        case 1:
            ajouteritem();
            break;
        case 2:
            afficheritem();
            break;
        case 3:
            chercheritem();
            break;
        case 4:
            exit(0);
        default:
            cout << " cette valeur n'existe pas dans le menu" << endl;
            break;
        }
    }
    return 0;
}
