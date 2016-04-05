#include <stdlib.h>
#include <iostream>
#include "ressources.h"


Ressources::Ressources() {

}

Ressources::Ressources(string _nom) {
    nom = _nom;
}

Ressources::Ressources(string _nom, string _auteur) {
    nom = _nom;
    auteur = _auteur;
}

Ressources::~Ressources(){

}

Livre::Livre() {

}

Livre::afficheInfos(){
    printf("\n");
    printf(Livre.nom);
     printf("\n");
    printf(Livre.auteur);
     printf("\n");
     printf("Test");
}

Livre::~Livre(){

}
