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

#endif // LIBRARY_STRING2_H
