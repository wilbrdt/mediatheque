#include "ressources.h"

#ifndef Num_H
#define Num_H

class Num : Ressources{
protected :
    string type;
    int taille;
    string chemin;

public :
    Num();
    Num(string _nom);
    Num(string _nom, string _auteur);
    Num(string _nom, string _auteur, string _type);
    Num(string _nom, string _auteur, string _type, int _taille);
    Num(string _nom, string _auteur, string _type, int _taille, string _chemin);
    ~Num();

    string getType() const;
    void setType(const string &value);
    int getTaille() const;
    void setTaille(int value);
    string getChemin() const;
    void setChemin(const string &value);
};

#endif // Num_H
