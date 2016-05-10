#include "../Includes/VHS.h"

using namespace std;


VHS::VHS() : Ressources(){

}


VHS::~VHS(){

}



string VHS::prod() const
{
    return _prod;
}

void VHS::setProd(const string &prod)
{
    _prod = prod;
}

string VHS::duree() const
{
    return _duree;
}

void VHS::setDuree(const string &duree)
{
    _duree = duree;
}

void VHS::show() {

    Ressources::show();
    cout << "Duree de la VHS : " << _duree << endl;
    cout << "Maison de production : " << _prod << endl;

}
