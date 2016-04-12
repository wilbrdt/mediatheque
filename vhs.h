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
    float getDuree() const;
    void setDuree(float value);
    string getProd() const;
    void setProd(const string &value);
};

#endif // VHS_H
