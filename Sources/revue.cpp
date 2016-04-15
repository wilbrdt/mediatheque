#include "../Includes/Revue.h"

using namespace std;

string Revue::getEditeur() const
{
    return editeur;
}

void Revue::setEditeur(const string &value)
{
    editeur = value;
}

int Revue::getNArticle() const
{
    return nArticle;
}

void Revue::setNArticle(int value)
{
    nArticle = value;
}

Revue::Revue() : Livre(), editeur("N/A"), nArticle(0){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::Revue(string _nom) : Livre(_nom), editeur("N/A"), nArticle(0){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::Revue(string _nom, string _auteur) : Livre(_nom, _auteur), editeur("N/A"), nArticle(0){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::Revue(string _nom, string _auteur, int _annee) : Livre(_nom, _auteur, _annee), editeur("N/A"), nArticle(0){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::Revue(string _nom, string _auteur, int _annee, string _resume) : Livre(_nom, _auteur, _annee, _resume), editeur("N/A"), nArticle(0){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::Revue(string _nom, string _auteur, int _annee, string _resume, int _nPage) : Livre(_nom, _auteur, _annee, _resume, _nPage), editeur("N/A"), nArticle(0){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::Revue(string _nom, string _auteur, int _annee, string _resume, int _nPage, string _editeur) : Livre(_nom, _auteur, _annee, _resume, _nPage), editeur(_editeur), nArticle(0){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::Revue(string _nom, string _auteur, int _annee, string _resume, int _nPage, string _editeur, int _nArticle) : Livre(_nom, _auteur, _annee, _resume, _nPage), editeur(_editeur), nArticle(_nArticle){
    for(int i = 0; i< 100; i++) {
        articles[i] = new Article();
    }
}

Revue::~Revue(){

}
