#include "ressources.h"

#ifndef CD_H
#define CD_H


class CD : public Ressources {

public:
    CD();
    ~CD();


    string prod() const;
    void setProd(const string &prod);

    string duree() const;
    void setDuree(const string &duree);

    string nPiste() const;
    void setNPiste(const string &nPiste);

    virtual void show();

protected :
    string _duree;
    string _nPiste;
    string _prod;
};

#endif // CD_H
