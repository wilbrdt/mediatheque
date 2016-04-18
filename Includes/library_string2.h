#include <iostream>

#ifndef LIBRARY_STRING2_H
#define LIBRARY_STRING2_H

using namespace std;

string découpageLigne(string ligne) {
    int pos = ligne.find(" *=* ");
    int tailleLigne = ligne.size();
    string newLigne = ligne.substr(pos+5,tailleLigne-(pos+5));
    return newLigne;
}

string découpageMot(string ligne) {
    int pos = ligne.find(" *=* ");
    string mot = ligne.substr(0,pos);
    return mot;
}

bool rechercheString(string chaine, string compare) {

    int taille = chaine.size();
    string newChaine;
    char c;

    for (int i =0; i < taille; i++) {
        c = toupper(chaine[i]);
        newChaine.push_back(c);
    }

    taille = compare.size();
    string newCompare;

    for (int i =0; i < taille; i++) {
        c = toupper(compare[i]);
        newCompare.push_back(c);
    }

    if(newChaine.find(newCompare) != string::npos)
        return true;
    else
        return false;
}

#endif // LIBRARY_STRING2_H
