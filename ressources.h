#include <stdlib.h>
#include <iostream>

class Ressources{
protected :
    std::string nom;
    std::string auteur;

public :
    Ressources();
    Ressources(std::string);
    Ressources(std::string,std::string);
    ~Ressources();
};

class Livre : Ressources{
protected :
    int annee;
    std::string resume;
    int nPage;

public :
    Livre();
    Livre(std::string,std::string);
    void afficheInfos();
    ~Livre();

};
