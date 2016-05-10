#include "../Includes/livre.h"

using namespace std;

Livre::Livre() : Ressources() {

}

Livre::~Livre(){

}

string Livre::annee() const
{
    return _annee;
}

void Livre::setAnnee(const string &annee)
{
    _annee = annee;
}

string Livre::resume() const
{
    return _resume;
}

void Livre::setResume(const string &resume)
{
    _resume = resume;
}

string Livre::nPage() const
{
    return _nPage;
}

void Livre::setNPage(const string &nPage)
{
    _nPage = nPage;
}

void Livre::show() {

    Ressources::show();
    cout << "Annee de parution : " << _annee << endl;
    cout << "Resume : " << _resume << endl;
    cout << "Nombre de page : " << _nPage << endl;

}
