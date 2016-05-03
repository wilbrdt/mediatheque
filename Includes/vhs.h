#include "ressources.h"

#ifndef VHS_H
#define VHS_H


class VHS : public Ressources {

public:
    VHS();
    ~VHS();

    virtual string prod() const;
    void setProd(const string &prod);

    string duree() const;
    void setDuree(const string &duree);

    virtual void show();

protected :
    string _duree;
    string _prod;

};

#endif // VHS_H
