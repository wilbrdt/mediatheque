#include "../Includes/Num.h"

using namespace std;


Num::Num() : Ressources(){

}



Num::~Num(){

}

string Num::type() const
{
    return _type;
}

void Num::setType(const string &type)
{
    _type = type;
}



string Num::chemin() const
{
    return _chemin;
}

void Num::setChemin(const string &chemin)
{
    _chemin = chemin;
}

string Num::taille() const
{
    return _taille;
}

void Num::setTaille(const string &taille)
{
    _taille = taille;
}

void Num::show() {

    Ressources::show();
    cout << "Type de fichier : " << _type << endl;
    cout << "Taille du fichier : " << _taille << endl;
    cout << "Chemin du fichier : " << _chemin << endl;

}
