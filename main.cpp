#include <iostream>
#include <string>
#include "hash.h"

using namespace std;


int main()
{
    hash1 HT;
    
    HT.ajouterItem("Allo", "064132878");
    HT.ajouterItem("Test", "074864287");
    HT.ajouterItem("Ikram", "064513287");
    HT.ajouterItem("Ayoub", "054961232");
    HT.ajouterItem("Fatima", "067894315");
    HT.ajouterItem("Ikhlass", "064295432");
    HT.ajouterItem("Ayman", "06948623");
    HT.ajouterItem("cd", "06786123");
    HT.ajouterItem("be", "05379861"); //same key as the previous one, to check


    HT.afficherItem();


    return 0;
}
