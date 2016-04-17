#include <iostream>

#ifndef LIBRARY_STRING_H
#define LIBRARY_STRING_H

using namespace std;

string découpageCommande(string instruction) {
    int position = instruction.find(" ");
    string commande = instruction.substr(0, position);

    int taille = commande.size();
    string newCommande;
    char c;

    for (int i =0; i < taille; i++) {
        c = toupper(commande[i]);
        newCommande.push_back(c);
    }
    return newCommande;
}

string découpageComplément (string instruction) {
    int taille = instruction.size();
    int position = instruction.find(" ");
    string complément = instruction.substr(position+1, taille-(position+1));
    return complément;
}

#endif // LIBRARY_STRING_H
