#include "ressources.h"

#ifndef VHS_H
#define VHS_H


class VHS :  Ressources
{
protected :
    float duree;
    string prod;

public:
    VHS();
    VHS(string _nom);
    VHS(string _nom, string _auteur);
    VHS(string _nom, string _auteur, float _duree);
    VHS(string _nom, string _auteur, float _duree, string _prod);
    ~VHS();
};

#endif // VHS_H
