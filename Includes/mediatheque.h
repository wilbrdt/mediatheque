#ifndef MEDIATHEQUE_H
#define MEDIATHEQUE_H

#include <iostream>
#include <fstream>
#include <vector>
#include <typeinfo>
#include <string>
#include "ressources.h"
#include "livre.h"
#include "cd.h"
#include "article.h"
#include "num.h"
#include "revue.h"
#include "vhs.h"
#include "dvd.h"

using namespace std;

class Mediatheque {

public:
    Mediatheque();
    ~Mediatheque();

    string nomMed() const;
    void setNomMed(const string &nomMed);

    int nRessources() const;
    void setNRessources(int nRessources);

    void bye();
    void help();
    void add(string type);
    void load(string filename);
    void save(char *filename);
    void search(string recherche);
    void clear();
    void reset();
    void list();
    void show(string id);
    void deleteId(string id);
    void borrow(string id);
    void restore(string id);

protected :
    string _nomMed;
    vector<Ressources *> _baseDonnées;
    int _nRessources;
};

#endif // MEDIATHEQUE_H
