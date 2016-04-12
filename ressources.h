#include <iostream>

#ifndef RESSOURCES_H
#define RESSOURCES_H

using namespace std;

class Ressources{
protected :
    string nom;
    string auteur;

public :
    Ressources();
    Ressources(string _nom);
    Ressources(string _nom, string _auteur);
    ~Ressources();
};


#endif // RESSOURCES_H
