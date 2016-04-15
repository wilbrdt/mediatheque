#include "../Includes/livre.h"

using namespace std;

int Livre::getAnnee() const
{
    return annee;
}

void Livre::setAnnee(int value)
{
    annee = value;
}

string Livre::getResume() const
{
    return resume;
}

void Livre::setResume(const string &value)
{
    resume = value;
}

int Livre::getNPage() const
{
    return nPage;
}

void Livre::setNPage(int value)
{
    nPage = value;
}

Livre::Livre() : Ressources(), annee(0000), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom) : Ressources(_nom), annee(0000), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom, string _auteur) : Ressources(_nom, _auteur), annee(0000), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom, string _auteur, int _annee) : Ressources(_nom, _auteur), annee(_annee), resume("N/A"), nPage(0){

}

Livre::Livre(string _nom, string _auteur, int _annee, string _resume) : Ressources(_nom, _auteur), annee(_annee), resume(_resume), nPage(0){

}

Livre::Livre(string _nom, string _auteur, int _annee, string _resume, int _nPage) : Ressources(_nom, _auteur), annee(_annee), resume(_resume), nPage(_nPage){

}

void Livre::afficheInfos(){
    cout << nom << endl << auteur << endl << "Test" << endl;
}

Livre::~Livre(){

}
