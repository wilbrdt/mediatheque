#include "Num.h"

using namespace std;

Num::Num() : Ressources(), type("N/A"), taille(0), chemin("N/A"){

}

Num::Num(string _nom) : Ressources(_nom), type("N/A"), taille(0), chemin("N/A"){

}

Num::Num(string _nom, string _auteur) : Ressources(_nom, _auteur), type("N/A"), taille(0), chemin("N/A"){

}

Num::Num(string _nom, string _auteur, string _type) : Ressources(_nom, _auteur), type(_type), taille(0), chemin("N/A"){

}

Num::Num(string _nom, string _auteur, string _type, int _taille) : Ressources(_nom, _auteur), type(_type), taille(_taille), chemin("N/A"){

}

Num::Num(string _nom, string _auteur, string _type, int _taille, string _chemin) : Ressources(_nom, _auteur), type(_type), taille(_taille), chemin(_chemin){

}

Num::~Num(){

}
