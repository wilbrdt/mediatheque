#include "cd.h"

using namespace std;

CD::CD() : Ressources(), duree(0), nPiste(0), prod("N/A"){

}

CD::CD(string _nom) : Ressources(_nom), duree(0), nPiste(0), prod("N/A"){

}

CD::CD(string _nom, string _auteur) : Ressources(_nom, _auteur), duree(0), nPiste(0), prod("N/A"){

}

CD::CD(string _nom, string _auteur, float _duree) : Ressources(_nom, _auteur), duree(_duree), nPiste(0), prod("N/A"){

}

CD::CD(string _nom, string _auteur, float _duree, int _nPiste) : Ressources(_nom, _auteur), duree(_duree), nPiste(_nPiste), prod("N/A"){

}

CD::CD(string _nom, string _auteur, float _duree, int _nPiste, string _prod) : Ressources(_nom, _auteur), duree(_duree), nPiste(_nPiste), prod(_prod){

}

CD::~CD(){

}
