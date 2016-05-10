#include "../Includes/ressources.h"
#include "../Includes/livre.h"
#include "../Includes/utilisateur.h"
#include "../Includes/mediatheque.h"


int main() {
    Utilisateur* user = new Utilisateur();
    string nomUtilisateur;
    string reponse;
    string motPasse;
    string action;
    Mediatheque *currentMed = new Mediatheque();

    cout << endl << "Bienvenue dans la bibliotheque de Babel" << endl << endl << "Quel est votre nom ?" << endl;
    getline(cin,nomUtilisateur);
    user->setNomUtilisateur(nomUtilisateur);
<<<<<<< HEAD
    cout << endl << "Bonjour " << user->nomUtilisateur() << ", êtes-vous administrateur ?" <<endl;
    getline(cin,réponse);
    unsigned taille = static_cast<unsigned>(réponse.size());
    string newRéponse;
    char c;

    for (unsigned i =0; i < taille; i++) {
        c = static_cast<char>(toupper(réponse[i]));
        newRéponse.push_back(c);
    }

    if(newRéponse == "OUI") {
=======
    cout << endl << "Bonjour " << user->nomUtilisateur() << ", etes-vous administrateur ?" <<endl;
    getline(cin,reponse);
    if(reponse == "oui" || reponse == "yes") {
>>>>>>> origin/master
        cout << "Veuillez entrer le mot de passe" << endl;
        getline(cin,motPasse);
        if(motPasse == user->motPasseAdmin()) {
            user->setEstAdmin(true);
            cout << "Vous etes bien l'administrateur, vous avez acces à toutes les fonctions";
        }
        else
            cout << "Vous n'etes pas administrateur, vous pouvez seulement consulter la mediatheque et effectuer des recherches" << endl;
    }
    else
        cout << "Vous n'etes pas administrateur, vous pouvez seulement consulter la mediatheque et effectuer des recherches" << endl;


    while(true) {
        cout << endl << "Quelle action souhaitez-vous effectuer ?" << endl;
        getline(cin, action);
        user->reconnaissanceAction(action, currentMed);
    }

    user->~Utilisateur();
}


