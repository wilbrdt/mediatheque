#ifndef UTILISATEUR_H
#define UTILISATEUR_H

#include <iostream>
#include <fstream>
#include "../Includes/mediatheque.h"

using namespace std;

class Utilisateur {

public:
    Utilisateur();
    void Add(string type);
    ~Utilisateur();

    void load(string filename);
    void reconnaissanceAction(string action, Mediatheque* currentMed);

    string nomUtilisateur() const;
    void setNomUtilisateur(const string &nomUtilisateur);

protected :
    string _nomUtilisateur;

};

#endif // UTILISATEUR_H
