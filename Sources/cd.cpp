#include "../Includes/cd.h"

using namespace std;

CD::CD() : Ressources(){
    
}


CD::~CD(){

}


string CD::prod() const
{
    return _prod;
}

void CD::setProd(const string &prod)
{
    _prod = prod;
}

string CD::duree() const
{
    return _duree;
}

void CD::setDuree(const string &duree)
{
    _duree = duree;
}

string CD::nPiste() const
{
    return _nPiste;
}

void CD::setNPiste(const string &nPiste)
{
    _nPiste = nPiste;
}

void CD::show() {

    Ressources::show();
    cout << "Duree du CD : " << _duree << endl;
    cout << "Nombre de piste : " << _nPiste << endl;
    cout << "Maison de production : " << _prod << endl;

}
