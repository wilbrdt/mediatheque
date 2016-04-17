#include "../Includes/Revue.h"

using namespace std;


Revue::Revue() : Livre(){

}

Revue::~Revue(){

}

string Revue::éditeur() const
{
    return _éditeur;
}

void Revue::setÉditeur(const string &éditeur)
{
    _éditeur = éditeur;
}

string Revue::nArticle() const
{
    return _nArticle;
}

void Revue::setNArticle(const string &nArticle)
{
    _nArticle = nArticle;
}

void Revue::show() {

    Livre::show();
    cout << "Editeur : " << _éditeur << endl;
    cout << "Nombre d'article : " << _nArticle << endl;

}

