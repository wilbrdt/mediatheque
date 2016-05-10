#include "../Includes/utilisateur.h"
#include "../Includes/library_string.h"


Utilisateur::Utilisateur()
{
    _motPasseAdmin = "ADMIN";
    _estAdmin = false;
}

Utilisateur::~Utilisateur() {

}

void Utilisateur::reconnaissanceAction(string instruction, Mediatheque *currentMed) { //Reconnait l'action tapee par l'utilisateur et execute la fonction correspondante

    string commande = decoupageCommande(instruction);
    string complement = decoupageComplement(instruction);

    if (commande == "BYE") {
        currentMed->bye();
    }

    else if (commande == "SEARCH") {
        currentMed->search(complement);
    }

    else if (commande == "LOAD") {
        currentMed->load(complement);
    }

    else if (commande == "CLEAR") {
        currentMed->clear();
    }

    else if (commande == "LIST") {
        currentMed->list();
    }

    else if (commande == "SHOW") {
        currentMed->show(complement);
    }

    else if (commande == "RESET") {
        currentMed->reset();
    }

    else if(_estAdmin) {

        if (commande == "ADD") {
            currentMed->add(complement);
        }

        else if (commande == "SAVE") {
            currentMed->save(complement);
        }

        else if (commande == "DELETE") {
            currentMed->deleteId(complement);
        }
    }

    else {
        cout << "Je ne connais pas cette fonction, veuillez en choisir une autre" << endl;
    }
}

string Utilisateur::nomUtilisateur() const
{
    return _nomUtilisateur;
}

void Utilisateur::setNomUtilisateur(const string &nomUtilisateur)
{
    _nomUtilisateur = nomUtilisateur;
}

string Utilisateur::motPasseAdmin() const
{
    return _motPasseAdmin;
}

void Utilisateur::setMotPasseAdmin(const string &motPasseAdmin)
{
    _motPasseAdmin = motPasseAdmin;
}

bool Utilisateur::estAdmin() const
{
    return _estAdmin;
}

void Utilisateur::setEstAdmin(bool estAdmin)
{
    _estAdmin = estAdmin;
}


