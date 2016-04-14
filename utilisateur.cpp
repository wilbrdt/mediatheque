#include "utilisateur.h"

string Utilisateur::getNomUtilisateur() const
{
    return nomUtilisateur;
}

void Utilisateur::setNomUtilisateur(const string &value)
{
    nomUtilisateur = value;
}

Utilisateur::Utilisateur()
{
    
}

void Utilisateur::Add(string type) {
    
    string _nom;
    string _auteur;
    
    cout << "Quelle est le nom de la ressource" << endl;
    getline(cin, _nom);
    cout << "Qui est l'auteur de la ressource" << endl;
    getline(cin, _nom);
    cout << type << endl;
}

Utilisateur::~Utilisateur() {

}

void Utilisateur::reconnaissanceAction(string action) {
    string instruction = action.substr(0, action.find(" "));

    if (instruction == "BYE") {
        cout << "Au revoir" << endl;
    }

    else if (instruction == "ADD") {
        cout << "ajout" << endl;
    }

    else if (instruction == "LOAD") {
        cout << "load" << endl;
    }

    else if (instruction == "SAVE") {
        cout << "save" << endl;
    }

    else if (instruction == "SEARCH") {
        cout << "search" << endl;
    }

    else if (instruction == "CLEAR") {
        cout << "clear" << endl;
    }

    else if (instruction == "LIST") {
        cout << "list" << endl;
    }

    else if (instruction == "SHOW") {
        cout << "show" << endl;
    }

    else if (instruction == "DELETE") {
        cout << "delete" << endl;
    }

    else if (instruction == "RESET") {
        cout << "reset" << endl;
    }

    else {
        cout << "Je ne connais pas cette fonction, veuillez en choisir une autre" << endl;
    }
}
