#include <iostream>

#ifndef LIBRARY_STRING_H
#define LIBRARY_STRING_H

using namespace std;

string decoupageCommande(string instruction) { //Decoupe la partie commande de la ligne recuperee et met tout en majuscule pour eviter les pb de casse
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

string decoupageComplement (string instruction) { //Decoupe la partie complement (id, filename, etc) de la ligne recuperee
    int taille = instruction.size();
    int position = instruction.find(" ");
    string complement = instruction.substr(position+1, taille-(position+1));
    return complement;
}

#endif // LIBRARY_STRING_H
