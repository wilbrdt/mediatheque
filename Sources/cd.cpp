#include "../Includes/cd.h"

using namespace std;

float CD::getDuree() const
{
    return duree;
}

void CD::setDuree(float value)
{
    duree = value;
}

int CD::getNPiste() const
{
    return nPiste;
}

void CD::setNPiste(int value)
{
    nPiste = value;
}

string CD::getProd() const
{
    return prod;
}

void CD::setProd(const string &value)
{
    prod = value;
}

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
