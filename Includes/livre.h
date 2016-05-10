#include "ressources.h"

#ifndef LIVRE_H
#define LIVRE_H

class Livre : public Ressources{

public :
    Livre();
    ~Livre();

    string annee() const;
    void setAnnee(const string &annee);

    string resume() const;
    void setResume(const string &resume);

    string nPage() const;
    void setNPage(const string &nPage);

    virtual void show();

protected :
    string _annee;
    string _resume;
    string _nPage;
};

#endif // LIVRE_H
