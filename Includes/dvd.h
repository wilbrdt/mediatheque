#include "VHS.h"

#ifndef DVD_H
#define DVD_H


class DVD : VHS {
protected :
    int nPiste;
public:
    DVD();
    DVD(string _nom);
    DVD(string _nom, string _auteur);
    DVD(string _nom, string _auteur, float _duree);
    DVD(string _nom, string _auteur, float _duree, string _prod);
    DVD(string _nom, string _auteur, float _duree, string _prod, int _nPiste);
    ~DVD();
    int getNPiste() const;
    void setNPiste(int value);
};

#endif // DVD_H
