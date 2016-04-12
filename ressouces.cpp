#include <stdlib.h>
#include <iostream>
#include "ressources.h"

using namespace std;

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

Livre::Livre(string _nom, string _auteur) {
    nom = _nom;
    auteur = _auteur;
}

void Livre::afficheInfos(){
    cout << nom << endl << auteur << endl << "Test" << endl;
}

Livre::~Livre(){

}
