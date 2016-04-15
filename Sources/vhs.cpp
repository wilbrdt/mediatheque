#include "VHS.h"

using namespace std;

float VHS::getDuree() const
{
    return duree;
}

void VHS::setDuree(float value)
{
    duree = value;
}

string VHS::getProd() const
{
    return prod;
}

void VHS::setProd(const string &value)
{
    prod = value;
}

VHS::VHS() : Ressources(), duree(0), prod("N/A"){

}

VHS::VHS(string _nom) : Ressources(_nom), duree(0), prod("N/A"){

}

VHS::VHS(string _nom, string _auteur) : Ressources(_nom, _auteur), duree(0), prod("N/A"){

}

VHS::VHS(string _nom, string _auteur, float _duree) : Ressources(_nom, _auteur), duree(_duree), prod("N/A"){

}


VHS::VHS(string _nom, string _auteur, float _duree, string _prod) : Ressources(_nom, _auteur), duree(_duree), prod(_prod){

}

VHS::~VHS(){

}
