#include "livre.h"
#include "article.h"

#ifndef REVUE_H
#define REVUE_H


class Revue : Livre {
protected :
    string editeur;
    int nArticle;
    Article* articles[100];

public:
    Revue();
    Revue(string _nom);
    Revue(string _nom, string _auteur);
    Revue(string _nom, string _auteur, int _annee);
    Revue(string _nom, string _auteur, int _annee, string _resume);
    Revue(string _nom, string _auteur, int _annee, string _resume, int _nPage);
    Revue(string _nom, string _auteur, int _annee, string _resume, int _nPage, string _editeur);
    Revue(string _nom, string _auteur, int _annee, string _resume, int _nPage, string _editeur, int _nArticle);
    ~Revue();
    string getEditeur() const;
    void setEditeur(const string &value);
    int getNArticle() const;
    void setNArticle(int value);
};

#endif // REVUE_H
