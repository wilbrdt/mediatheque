#include <stdlib.h>
#include <iostream>

class Ressources{
protected :
    string nom;
    string auteur;

public :
    Ressources();
    Ressources(string);
    Ressources(string,string);
    ~Ressources();
};

class Livre : Ressources{
protected :
    int annee;
    string resume;
    int nPage;

public :
    Livre();
    void afficheInfos();
    ~Livre();

};
