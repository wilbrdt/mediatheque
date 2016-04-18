#include "../Includes/mediatheque.h"
#include "../Includes/library_string2.h"

Mediatheque::Mediatheque() {

}

Mediatheque::~Mediatheque(){

}

string Mediatheque::nomMed() const
{
    return _nomMed;
}

void Mediatheque::setNomMed(const string &nomMed)
{
    _nomMed = nomMed;
}

int Mediatheque::nRessources() const
{
    return _nRessources;
}

void Mediatheque::setNRessources(int nRessources)
{
    _nRessources = nRessources;
}

void Mediatheque::load(string filename) {

    reset();

    string file = filename + ".txt";

    _nRessources = 0;
    _nomMed = filename;

    string ligne;

    ifstream fichier(file, ios::in);  // on ouvre le fichier en lecture

    if(fichier) {  // si l'ouverture a réussi

        while(getline(fichier, ligne)) {

            string mot;

            string id;
            string type;
            string nom;
            string auteur;

            for(int i = 0; i < 4; i++) {

                mot = découpageMot(ligne);
                ligne = découpageLigne(ligne);

                switch(i) {
                    case 0 :
                        id = mot;
                    break;

                    case 1 :
                        type = mot;
                    break;

                    case 2 :
                        nom = mot;
                    break;

                    case 3 :
                        auteur = mot;
                    break;
                }
            }

            if (type == "Livre") {
                string année;
                string résumé;
                string nPage;

                for(int i = 0; i < 2; i++) {
                    mot = découpageMot(ligne);
                    ligne = découpageLigne(ligne);

                    switch(i) {
                        case 0 :
                            année = mot;
                        break;

                        case 1 :
                            résumé = mot;
                        break;          
                    }
                }

                nPage = ligne;

                Livre *ressource = new Livre(); // creation d'un livre et incorporation des infos
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setAnnée(année);
                ressource->setRésumé(résumé);
                ressource->setNPage(nPage);
                _baseDonnées.push_back(ressource);

                _nRessources++;

            }

            else if (type == "CD") {
                string durée;
                string nPiste;
                string prod;

                for(int i = 0; i < 2; i++) {
                    mot = découpageMot(ligne);
                    ligne = découpageLigne(ligne);

                    switch(i) {
                        case 0 :
                            durée = mot;
                        break;

                        case 1 :
                            nPiste = mot;
                        break;
                    }
                }

                prod = ligne;

                CD *ressource = new CD(); // creation d'un livre et incorporation des infos
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setDurée(durée);
                ressource->setNPiste(nPiste);
                ressource->setProd(prod);
                _baseDonnées.push_back(ressource);

                _nRessources++;

            }

            else if (type == "VHS") {

                string durée;
                string prod;

                for(int i = 0; i < 1; i++) {
                    mot = découpageMot(ligne);
                    ligne = découpageLigne(ligne);

                    switch(i) {
                        case 0 :
                            durée = mot;
                        break;
                    }
                }

                prod = ligne;

                VHS *ressource = new VHS();
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setDurée(durée);
                ressource->setProd(prod);
                _baseDonnées.push_back(ressource);

                _nRessources++;



            }

            else if (type == "DVD") {

                string durée;
                string prod;
                string nPiste;

                for(int i = 0; i < 2; i++) {
                    mot = découpageMot(ligne);
                    ligne = découpageLigne(ligne);

                    switch(i) {
                        case 0 :
                            durée = mot;
                        break;

                        case 1 :
                            prod = mot;
                        break;
                    }
                }

                nPiste = ligne;

                DVD *ressource = new DVD();
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setDurée(durée);
                ressource->setProd(prod);
                ressource->setNPiste(nPiste);
                _baseDonnées.push_back(ressource);

                _nRessources++;


            }

            else if (type == "Num") {
                string extension;
                string taille;
                string chemin;

                for(int i = 0; i < 2; i++) {
                    mot = découpageMot(ligne);
                    ligne = découpageLigne(ligne);

                    switch(i) {
                        case 0 :
                            extension = mot;
                        break;

                        case 1 :
                            taille = mot;
                        break;
                    }
                }

                chemin = ligne;

                Num *ressource = new Num(); // creation d'un livre et incorporation des infos
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setType(extension);
                ressource->setTaille(taille);
                ressource->setChemin(chemin);
                _baseDonnées.push_back(ressource);

                _nRessources++;

            }

            else if (type == "Revue") {
                string année;
                string résumé;
                string nPage;
                string éditeur;
                string nArticle;

                for(int i = 0; i < 4; i++) {
                    mot = découpageMot(ligne);
                    ligne = découpageLigne(ligne);

                    switch(i) {
                        case 0 :
                            année = mot;
                        break;

                        case 1 :
                            résumé = mot;
                        break;

                        case 2 :
                            nPage = mot;
                        break;

                        case 3 :
                            éditeur = mot;
                        break;
                    }
                }

                nArticle = ligne;

                Revue *ressource = new Revue(); // creation d'un livre et incorporation des infos
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setAnnée(année);
                ressource->setRésumé(résumé);
                ressource->setNPage(nPage);
                ressource->setÉditeur(éditeur);
                ressource->setNArticle(nArticle);
                _baseDonnées.push_back(ressource);

                _nRessources++;

            }

            else
                cout << "Problème de lecture de la ressource " << _nRessources << endl << "Vérifiez la ligne " << _nRessources +1 << endl;

        }

        cout << "La médiathèque " << _nomMed << " a bien été chargée." << endl;
        cout << "Nombre de ressources chargées : " << _nRessources << endl;

        fichier.close();  // on ferme le fichier`

    }

    else  // sinon
      cerr << "Impossible d'ouvrir le fichier !" << endl;

}

void Mediatheque::show(string id) {
    int i = 0;
    while( i < (int)_baseDonnées.size() && _baseDonnées[i]->id() != id) {
        i++;
    }

    if (_baseDonnées[i]->id() == id) {
        _baseDonnées[i]->show();
    }

    else if (i == (int)_baseDonnées.size()) {
        cout << "La ressource " << id << " n'est pas dans la médiathèque." << endl;
    }
}

void Mediatheque::bye() {

    while(!_baseDonnées.empty()) {
        delete _baseDonnées.back();
        _baseDonnées.pop_back();
    }

    cout << "Au revoir" << endl;
    exit(0);
}

void Mediatheque::reset() {

    while(!_baseDonnées.empty()) {
        delete _baseDonnées.back();
        _baseDonnées.pop_back();
    }

    cout << "Toutes les ressources ont été supprimées de la médiathèque " << _nomMed << endl;
}

void Mediatheque::deleteId(string id) {

    int i = 0;
    while( i < (int)_baseDonnées.size() && _baseDonnées[i]->id() != id) {
        i++;
    }

    if (_baseDonnées[i]->id() == id) {
        delete _baseDonnées[i];
        _baseDonnées.erase(_baseDonnées.begin()+i);
            cout << "La ressource " << id << " a bien été effacée de la médiathèque" << endl;
    }

    else if (i == (int)_baseDonnées.size()) {
        cout << "La ressource " << id << " n'est pas dans la médiathèque." << endl;
    }

}

void Mediatheque::save(string filename) {

    string file = filename + ".txt";
    string séparateur = " *=* ";
    string type;

    ofstream fichier(file, ios::out | ios::trunc);  // on ouvre le fichier en lecture

    if(fichier) {  // si l'ouverture a réussi

        for (int i =0; i < (int)_baseDonnées.size(); i++) {

            type = _baseDonnées[i]->type();

            fichier << _baseDonnées[i]->id() << séparateur << type << séparateur << _baseDonnées[i]->nom() << séparateur << _baseDonnées[i]->auteur() << séparateur;

            if (type == "Livre") {
                Livre *cp = new Livre();
                cp = (Livre*) _baseDonnées[i];
                fichier << cp->année() << séparateur << cp->résumé() << séparateur << cp->nPage();
            }

            else if (type == "CD") {
                CD *cp = new CD();
                cp = (CD*) _baseDonnées[i];
                fichier << cp->durée() << séparateur << cp->nPiste() << séparateur << cp->prod();
            }

            else if (type == "VHS") {
                VHS *cp = new VHS();
                cp = (VHS*) _baseDonnées[i];
                fichier << cp->durée() << séparateur << cp->prod();
            }

            else if (type == "DVD") {
                DVD *cp = new DVD();
                cp = (DVD*) _baseDonnées[i];
                fichier << cp->durée() << séparateur << cp->prod() << séparateur << cp->nPiste();
            }

            else if (type == "Num") {
                Num *cp = new Num();
                cp = (Num*) _baseDonnées[i];
                fichier << cp->type() << séparateur << cp->taille() << séparateur << cp->chemin();
            }

            else if (type == "Revue") {
                Revue *cp = new Revue();
                cp = (Revue*) _baseDonnées[i];
                fichier << cp->éditeur() << séparateur << cp->nArticle();
            }

            fichier << endl;
        }

        fichier.close();

        cout << "La médiathèque " << _nomMed << " actuellement chargée, a bien été sauvegardée dans le fichier " << file << endl;
    }

    else  // sinon
        cerr << "Erreur à l'ouverture !" << endl;
}
