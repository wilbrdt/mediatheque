#include <iostream>

#ifndef UTILISATEUR_H
#define UTILISATEUR_H

using namespace std;

class Utilisateur
{
protected :
    string nomUtilisateur;

public:
    Utilisateur();
    void Add(string type);
    ~Utilisateur();
    string getNomUtilisateur() const;
    void setNomUtilisateur(const string &value);
    void reconnaissanceAction(string action);
};

#endif // UTILISATEUR_H
