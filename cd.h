#include "ressources.h"

#ifndef CD_H
#define CD_H


class CD :  Ressources
{
protected :
    float duree;
    int nPiste;
    string prod;

public:
    CD();
    CD(string _nom);
    CD(string _nom, string _auteur);
    CD(string _nom, string _auteur, float _duree);
    CD(string _nom, string _auteur, float _duree, int _nPiste);
    CD(string _nom, string _auteur, float _duree, int _nPiste, string _prod);
    ~CD();
    float getDuree() const;
    void setDuree(float value);
    int getNPiste() const;
    void setNPiste(int value);
    string getProd() const;
    void setProd(const string &value);
};

#endif // CD_H
