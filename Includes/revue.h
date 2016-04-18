#include "livre.h"
#include "article.h"

#ifndef REVUE_H
#define REVUE_H


class Revue : public Livre {

public:
    Revue();
    ~Revue();

    virtual string éditeur() const;
    void setÉditeur(const string &éditeur);

    string nArticle() const;
    void setNArticle(const string &nArticle);

    virtual void show();

protected :
    string _éditeur;
    string _nArticle;
    //Article* _articles[100];
};

#endif // REVUE_H
