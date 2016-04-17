#include "ressources.h"

#ifndef Num_H
#define Num_H

class Num : public Ressources{

public :
    Num();
    ~Num();


    string type() const;
    void setType(const string &type);

    string chemin() const;
    void setChemin(const string &chemin);

    string taille() const;
    void setTaille(const string &taille);

    virtual void show();

protected :
    string _type;
    string _taille;
    string _chemin;

};

#endif // Num_H
