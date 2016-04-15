#include "../Includes/ressources.h"
#include "../Includes/livre.h"
#include "../Includes/utilisateur.h"

int main() {
    Utilisateur user;
    string nomUtilisateur;
    string action;

    cout << endl << "Bienvenue dans la bibliothèque de Babel" << endl << endl << "Quel est votre nom ?" << endl;
    getline(cin,nomUtilisateur);
    user.setNomUtilisateur(nomUtilisateur);
    cout << endl << "Bonjour " << user.getNomUtilisateur() << endl;

    while(true) {
        cout << endl << "Quelle action souhaitez-vous effectuer ?" << endl;
        getline(cin, action);
        user.reconnaissanceAction(action);
    }

    user.~Utilisateur();
}


