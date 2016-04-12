#include "livre.h"

using namespace std;

Livre::Livre() : Ressources(), annee(0000), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom) : Ressources(_nom), annee(0000), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom, string _auteur) : Ressources(_nom, _auteur), annee(0000), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom, string _auteur, int _annee) : Ressources(_nom, _auteur), annee(_annee), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom, string _auteur, int _annee, string _resume) : Ressources(_nom, _auteur), annee(_annee), resume(_resume), nPage(0){

}

Livre::Livre(string _nom, string _auteur, int _annee, string _resume, int _nPage) : Ressources(_nom, _auteur), annee(_annee), resume(_resume), nPage(_nPage){

}

void Livre::afficheInfos(){
    cout << nom << endl << auteur << endl << "Test" << endl;
}

Livre::~Livre(){

}
