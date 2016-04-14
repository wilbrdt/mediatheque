#include "ressources.h"
#include "livre.h"
#include "utilisateur.h"

int main() {
//   printf("Test");
//   printf("Test2");

//   Livre livre1("E-penser", "Bruce Benamran");

//   livre1.afficheInfos();

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


