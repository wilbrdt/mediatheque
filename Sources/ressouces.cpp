#include "../Includes/ressources.h"

using namespace std;

Ressources::Ressources() : nom("N/A"), auteur("N/A"){
}

Ressources::Ressources(string _nom) : nom(_nom), auteur("N/A"){

}

Ressources::Ressources(string nom, string _auteur) : nom(nom), auteur(_auteur){

}

Ressources::~Ressources(){

}

string Ressources::getAuteur() const
{
    return auteur;
}

void Ressources::setAuteur(const string &value)
{
    auteur = value;
}

string Ressources::getNom() const
{
    return nom;
}

void Ressources::setNom(const string &value)
{
    nom = value;
}

