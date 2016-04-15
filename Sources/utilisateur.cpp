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

void Utilisateur::load(string filename) {

    string file = filename + ".txt";
    bool nouvelleRessource = true;

    ifstream fichier(file, ios::in);  // on ouvre le fichier en lecture

    if(fichier)  // si l'ouverture a réussi
       {
            string ligne;
           while(getline(fichier, ligne)) {
                if (ligne == '\n')
                    nouvelleRessource = true;

                else if (nouvelleRessource == true) {

                    nouvelleRessource = false;

                    if (ligne == "Livre") {

                    }

                    else if (ligne == "CD") {

                    }

                    else if (ligne == "VHS") {

                    }

                    else if (ligne == "DVD") {

                    }

                    else if (ligne == "Ressource numérique") {

                    }

                    else if (ligne == "Revue") {

                    }

                    else if (ligne == "Article") {

                    }
                }
           }

                    fichier.close();  // on ferme le fichier
       }

     else  // sinon
       cerr << "Impossible d'ouvrir le fichier !" << endl;

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
        this->load(action.substr(action.find(" ")+1, action.size()));
        cout << "Chargement effectué" << endl;
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


