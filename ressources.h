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
    Ressources(string nom);
    Ressources(string nom,string);
    ~Ressources();
};


#endif // RESSOURCES_H
