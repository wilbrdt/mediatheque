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

void Mediatheque::load(string filename) { //Charge la mediathèque correspondante au nom du fichier (filename)

    reset();

    string file = filename + ".txt";
    int nRessources = 0;
    _nomMed = filename;

    string ligne;

    ifstream fichier(file, ios::in);  // on ouvre le fichier en lecture

    if(fichier) {  // si l'ouverture a reussi

        while(getline(fichier, ligne)) { //On recupere chaque ligne

            nRessources++;
            string mot;
            string id;
            string type;
            string nom;
            string auteur;

            for(int i = 0; i < 4; i++) { //On extrait les infos de base de la ligne (id, type, nom et auteur)

                mot = decoupageMot(ligne);
                ligne = decoupageLigne(ligne);

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

            if (type == "Livre") { //En fonction du type, on recupère les autres infos
                string annee;
                string resume;
                string nPage;

                for(int i = 0; i < 2; i++) {
                    mot = decoupageMot(ligne);
                    ligne = decoupageLigne(ligne);

                    switch(i) {
                        case 0 :
                            annee = mot;
                        break;

                        case 1 :
                            resume = mot;
                        break;          
                    }
                }

                nPage = ligne;

                Livre *ressource = new Livre(); // On copie les infos dans le type qui va bien
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setAnnee(annee);
                ressource->setResume(resume);
                ressource->setNPage(nPage);
                _baseDonnees.push_back(ressource); //On ajoute la ressource à la base de donnees

            }

            else if (type == "CD") {
                string duree;
                string nPiste;
                string prod;

                for(int i = 0; i < 2; i++) {
                    mot = decoupageMot(ligne);
                    ligne = decoupageLigne(ligne);

                    switch(i) {
                        case 0 :
                            duree = mot;
                        break;

                        case 1 :
                            nPiste = mot;
                        break;
                    }
                }

                prod = ligne;

                CD *ressource = new CD();
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setDuree(duree);
                ressource->setNPiste(nPiste);
                ressource->setProd(prod);
                _baseDonnees.push_back(ressource);

            }

            else if (type == "VHS") {

                string duree;
                string prod;

                for(int i = 0; i < 1; i++) {
                    mot = decoupageMot(ligne);
                    ligne = decoupageLigne(ligne);

                    switch(i) {
                        case 0 :
                            duree = mot;
                        break;
                    }
                }

                prod = ligne;

                VHS *ressource = new VHS();
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setDuree(duree);
                ressource->setProd(prod);
                _baseDonnees.push_back(ressource);

            }

            else if (type == "DVD") {

                string duree;
                string prod;
                string nPiste;

                for(int i = 0; i < 2; i++) {
                    mot = decoupageMot(ligne);
                    ligne = decoupageLigne(ligne);

                    switch(i) {
                        case 0 :
                            duree = mot;
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

                ressource->setDuree(duree);
                ressource->setProd(prod);
                ressource->setNPiste(nPiste);
                _baseDonnees.push_back(ressource);

            }

            else if (type == "Num") {
                string extension;
                string taille;
                string chemin;

                for(int i = 0; i < 2; i++) {
                    mot = decoupageMot(ligne);
                    ligne = decoupageLigne(ligne);

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

                ressource->setExtension(extension);
                ressource->setTaille(taille);
                ressource->setChemin(chemin);
                _baseDonnees.push_back(ressource);

            }

            else if (type == "Revue") {
                string annee;
                string resume;
                string nPage;
                string editeur;
                unsigned nArticle;

                for(int i = 0; i < 5; i++) {
                    mot = decoupageMot(ligne);
                    ligne = decoupageLigne(ligne);

                    switch(i) {
                        case 0 :
                            annee = mot;
                        break;

                        case 1 :
                            resume = mot;
                        break;

                        case 2 :
                            nPage = mot;
                        break;

                        case 3 :
                            editeur = mot;
                        break;

                        case 4 :
                            nArticle = static_cast<unsigned>(stoi(mot));
                        break;
                    }
                }

                Revue *ressource = new Revue();
                ressource->setId(id);
                ressource->setNom(nom);
                ressource->setAuteur(auteur);
                ressource->setType(type);

                ressource->setAnnee(annee);
                ressource->setResume(resume);
                ressource->setNPage(nPage);
                ressource->setEditeur(editeur);

                for(unsigned i = 0; i< nArticle; i++) {
                    mot = decoupageMot(ligne);
                    ligne = decoupageLigne(ligne);

                    Article *article = new Article();
                    article->setNomArticle(mot);
                    ressource->addArticle(article);
                }

                _baseDonnees.push_back(ressource);

            }

            else
                cout << "Problème de lecture de la ressource " << nRessources << endl << "Verifiez la ligne " << nRessources +1 << endl;

        }

        cout << "La mediathèque " << _nomMed << " a bien ete chargee." << endl;
        cout << "Nombre de ressources chargees : " << _baseDonnees.size() << endl;

        fichier.close();  // on ferme le fichier`

    }

    else  // sinon
      cerr << "Impossible d'ouvrir le fichier !" << endl;

    if(_baseRecherche.empty()) { //On charge aussi toutes les ressources dans la base de donnees courante
        for (unsigned i =0; i < static_cast<unsigned>(_baseDonnees.size()); i++) {

            _baseRecherche.push_back((_baseDonnees[i]));
        }
    }

}

void Mediatheque::show(string id) { //On montre toutes les infos d'une ressource
    unsigned i = 0;
    while( i < static_cast<unsigned>(_baseDonnees.size())  && _baseDonnees[i]->id() != id) { //On recherche la ressource avec l'id correspondante
        i++;
    }

    if (_baseDonnees[i]->id() == id) { //Dès qu'on l'a trouve, on affiche ses infos
        _baseDonnees[i]->show();
    }

    else if (i == (static_cast<unsigned>(_baseDonnees.size()))) {
        cout << "La ressource " << id << " n'est pas dans la mediathèque." << endl;
    }
}

void Mediatheque::bye() { //On ferme l'appli en nettoyant les vector crees

    _baseDonnees.clear();
    _baseRecherche.clear();

    cout << "Au revoir" << endl;
    exit(1);
}

void Mediatheque::reset() { //On nettoie seulement les vector crees

    _baseDonnees.clear();
    _baseRecherche.clear();

    cout << "Toutes les ressources ont ete supprimees de la mediathèque " << _nomMed << endl;
}

void Mediatheque::deleteId(string id) { //On supprime une ressource en fonction de son id

    unsigned i = 0;
    while( i < static_cast<unsigned>(_baseDonnees.size()) && _baseDonnees[i]->id() != id) { //Recherche de la ressource
        i++;
    }

    if (_baseDonnees[i]->id() == id) { //Si on l'a trouve, on l'efface et on fait de même dansla base de recherche
        _baseDonnees.erase(_baseDonnees.begin()+i);

        while( i < static_cast<unsigned>(_baseRecherche.size()) && _baseRecherche[i]->id() != id) {
            i++;
        }

        if (_baseRecherche[i]->id() == id) {
            _baseRecherche.erase(_baseRecherche.begin()+i);
        }

        clear();
        cout << "La ressource " << id << " a bien ete effacee de la mediathèque" << endl;
    }


    else if (i == static_cast<unsigned>(_baseDonnees.size())) { //Sinon, on l'indique à l'utilisateur
        cout << "La ressource " << id << " n'est pas dans la mediathèque." << endl;
    }

}

void Mediatheque::save(string filename) { //Sauvegarde de la base de donnees dans un fichier texte

    string file = filename + ".txt";
    string separateur = " *=* ";
    string type;

    ofstream fichier(file, ios::out | ios::trunc);  // on ouvre le fichier en ecriture

    if(fichier) {  // si l'ouverture a reussi

        for (unsigned i =0; i < static_cast<unsigned>(_baseDonnees.size()); i++) {//On parcourt touts les cases de la base de donnees

            type = _baseDonnees[i]->type();
            //On ecrit les infos de bases
            fichier << _baseDonnees[i]->id() << separateur << type << separateur << _baseDonnees[i]->nom() << separateur << _baseDonnees[i]->auteur() << separateur;
            //En fonction du type, on ecrit les infos qui manquent
            if (type == "Livre") {
                Livre *cp = new Livre();
                cp = dynamic_cast<Livre*>(_baseDonnees[i]) ;
                fichier << cp->annee() << separateur << cp->resume() << separateur << cp->nPage();
            }

            else if (type == "CD") {
                CD *cp = new CD();
                cp = dynamic_cast<CD*>(_baseDonnees[i]) ;
                fichier << cp->duree() << separateur << cp->nPiste() << separateur << cp->prod();
            }

            else if (type == "VHS") {
                VHS *cp = new VHS();
                cp = dynamic_cast<VHS*>(_baseDonnees[i]) ;
                fichier << cp->duree() << separateur << cp->prod();
            }

            else if (type == "DVD") {
                DVD *cp = new DVD();
                cp = dynamic_cast<DVD*>(_baseDonnees[i]) ;
                fichier << cp->duree() << separateur << cp->prod() << separateur << cp->nPiste();
            }

            else if (type == "Num") {
                Num *cp = new Num();
                cp = dynamic_cast<Num*>(_baseDonnees[i]) ;
                fichier << cp->type() << separateur << cp->taille() << separateur << cp->chemin();
            }

            else if (type == "Revue") {
                Revue *cp = new Revue();
                cp = dynamic_cast<Revue*>(_baseDonnees[i]) ;
                fichier << cp->annee() << separateur << cp->resume() << separateur << cp->nPage() << separateur <<cp->editeur() << separateur << cp->getNArticle();
                for (int i = 0; i< cp->getNArticle() ; i++) {
                    fichier << separateur << cp->getNomArticleI(i);
                }

            }

            fichier << endl;
        }

        fichier.close();

        cout << "La mediathèque " << _nomMed << " actuellement chargee, a bien ete sauvegardee dans le fichier " << file << endl;
    }

    else  // sinon
        cerr << "Erreur à l'ouverture !" << endl;
}

void Mediatheque::add(string type) {//On ajoute une ressource dans la base de donnees

    string id = to_string((stoi((_baseDonnees.back())->id()))+1); //On trouve une id non prise en regardant la dernière case

    string ligne;
    string nom;
    string auteur;
    //On recupère les infos de base
    cout << "Quel est le nom de la ressource ?" << endl;
    getline(cin,nom);
    cout << "Qui est l'auteur de la ressource ?" << endl;
    getline(cin,auteur);

    if (type == "Livre") { //On recupère les infos complementaires en fonction du type
        Livre *ressource = new Livre();
        ressource->setId(id);
        ressource->setType(type);
        ressource->setNom(nom);
        ressource->setAuteur(auteur);

        string annee;
        string resume;
        string nPage;

        cout << "Quelle est l'annee de parution du livre ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,annee);
        cout << "Veuillez donner un resume du livre (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,resume);
        cout << "Quel est le nombre de page du livre ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,nPage);

        ressource->setAnnee(annee);
        ressource->setResume(resume);
        ressource->setNPage(nPage);

        _baseDonnees.push_back(ressource);
    }

    else if (type == "CD") {
        CD *ressource = new CD();
        ressource->setId(id);
        ressource->setType(type);
        ressource->setNom(nom);
        ressource->setAuteur(auteur);

        string duree;
        string nPiste;
        string prod;

        cout << "Quelle est la duree du CD ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,duree);
        cout << "Combien de piste il y a t-il sur le CD ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,nPiste);
        cout << "Quelle est le nom de la maison de production du CD? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,prod);

        ressource->setDuree(duree);
        ressource->setNPiste(nPiste);
        ressource->setProd(prod);

        _baseDonnees.push_back(ressource);
    }

    else if (type == "VHS") {
        VHS *ressource = new VHS();
        ressource->setId(id);
        ressource->setType(type);
        ressource->setNom(nom);
        ressource->setAuteur(auteur);

        string duree;
        string prod;

        cout << "Quelle est la duree de la VHS ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,duree);
        cout << "Quelle est le nom de la maison de production de la VHS? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,prod);

        ressource->setDuree(duree);
        ressource->setProd(prod);

        _baseDonnees.push_back(ressource);
    }

    else if (type == "DVD") {
        DVD *ressource = new DVD();
        ressource->setId(id);

        ressource->setType(type);
        ressource->setNom(nom);
        ressource->setAuteur(auteur);

        string duree;
        string prod;
        string nPiste;

        cout << "Quelle est la duree du DVD ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,duree);
        cout << "Quelle est le nom de la maison de production du DVD? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,prod);
        cout << "Combien de piste il y a t-il sur le DVD ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,nPiste);

        ressource->setDuree(duree);
        ressource->setProd(prod);
        ressource->setNPiste(nPiste);

        _baseDonnees.push_back(ressource);
    }

    else if (type == "Num") {
        Num *ressource = new Num();
        ressource->setId(id);

        ressource->setType(type);
        ressource->setNom(nom);
        ressource->setAuteur(auteur);

        string extension;
        string taille;
        string chemin;

        cout << "Quel est le type de la ressource numerique ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,extension);
        cout << "Quelle est la taille de la ressource numerique (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,taille);
        cout << "Quel est le chemin de la ressource numerique ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,chemin);

        ressource->setExtension(extension);
        ressource->setTaille(taille);
        ressource->setChemin(chemin);

        _baseDonnees.push_back(ressource);
    }

    else if (type == "Revue") {
        Revue *ressource = new Revue();

        ressource->setId(id);

        ressource->setType(type);
        ressource->setNom(nom);
        ressource->setAuteur(auteur);

        string annee;
        string resume;
        string nPage;

        cout << "Quelle est l'annee de parution de la revue ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,annee);
        cout << "Veuillez donner un resume de la revue (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,resume);
        cout << "Quel est le nombre de page de la revue ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,nPage);

        ressource->setAnnee(annee);
        ressource->setResume(resume);
        ressource->setNPage(nPage);

        string editeur;
        string nArticle;

        cout << "Quel est le nom de l'editeur de la revue (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,editeur);
        cout << "Quel est le nombre d' article de la revue ? (si vous ne savez pas, veuillez inscrire : N/A)" << endl;
        getline(cin,nArticle);

        ressource->setEditeur(editeur);
        string nomArticle;
        for(int i = 0; i < stoi(nArticle); i++) {
            cout << "Quel est le nom de de l'article " << i+1 << " ? (si vous ne savez pas, veuillez inscrire : N/A)" <<endl;
            getline(cin, nomArticle);
            Article* article = new Article();
            article->setNomArticle((nomArticle));
            ressource->addArticle(article);
        }

        _baseDonnees.push_back(ressource);
    }

    clear(); //On ajoute cette ressource dans la base de recherche en la reinitialisant
    cout << "La ressource " << nom << " avec l'id : " << id << " a bien ete ajoutee à la mediathèque " << _nomMed << endl;

}

void Mediatheque::search(string info) { //On recherche une info dans la base de recherche

    vector <Ressources*> baseRechercheTmp; //On cree une base de Recherche temporaire où on va mettre les resultats positifs de la recherche

    for (unsigned i =0; i < static_cast<unsigned>(_baseRecherche.size()); i++) { //On parcourt toutes les cases de la base de Recherche

        string nom = _baseRecherche[i]->nom();
        string auteur = _baseRecherche[i]->auteur();
        string type = _baseRecherche[i]->type();
        string id = _baseRecherche[i]->id();

        if (type == "Livre") {//On verifie s'il y a un match avec une des infos, si oui, on ajoute la ressource à la base de recherche temporaire
            Livre *cp = new Livre();
            cp = dynamic_cast<Livre*>(_baseRecherche[i]);
            string annee = cp->annee();
            string resume = cp->resume();
            string nPage = cp->nPage();

            if(rechercheString(nom,info) || rechercheString(auteur, info) || rechercheString(type, info) || rechercheString(annee,info) || rechercheString(resume, info) || rechercheString(nPage, info)) {
                baseRechercheTmp.push_back(_baseRecherche[i]);
            }
        }

        else if (type == "CD") {
            CD *cp = new CD();
            cp = dynamic_cast<CD*>(_baseRecherche[i]);
            string duree = cp->duree();

            string nPiste = cp->nPiste();
            string prod = cp->prod();

            if(rechercheString(nom,info) || rechercheString(auteur, info) || rechercheString(type, info) || rechercheString(duree,info) || rechercheString(nPiste, info) || rechercheString(prod, info)) {
                baseRechercheTmp.push_back(_baseRecherche[i]);
            }
        }

        else if (type == "VHS") {

            VHS *cp = new VHS();
            cp = dynamic_cast<VHS*>(_baseRecherche[i]);
            string duree = cp->duree();
            string prod = cp->prod();

            if(rechercheString(nom,info) || rechercheString(auteur, info) || rechercheString(type, info) || rechercheString(duree,info) || rechercheString(prod, info)) {
                baseRechercheTmp.push_back(_baseRecherche[i]);
            }
        }

        else if (type == "DVD") {
            DVD *cp = new DVD();
            cp = dynamic_cast<DVD*>(_baseRecherche[i]);
            string duree = cp->duree();
            string nPiste = cp->nPiste();
            string prod = cp->prod();

            if(rechercheString(nom,info) || rechercheString(auteur, info) || rechercheString(type, info) || rechercheString(duree,info) || rechercheString(nPiste, info) || rechercheString(prod, info)) {
                baseRechercheTmp.push_back(_baseRecherche[i]);
            }

        }

        else if (type == "Num") {
            Num *cp = new Num();
            cp = dynamic_cast<Num*>(_baseRecherche[i]);
            string extension = cp->extension();
            string taille = cp->taille();
            string chemin = cp->chemin();

            if(rechercheString(nom,info) || rechercheString(auteur, info) || rechercheString(type, info) || rechercheString(extension,info) || rechercheString(taille, info) || rechercheString(chemin, info)) {
               baseRechercheTmp.push_back(_baseRecherche[i]);
            }
        }

        else if (type == "Revue") {
            Revue *cp = new Revue();
            cp =dynamic_cast<Revue*>(_baseRecherche[i]);
            string annee = cp->annee();
            string resume = cp->resume();
            string nPage = cp->nPage();
            string editeur = cp->editeur();

            if(rechercheString(nom,info) || rechercheString(auteur, info) || rechercheString(type, info) || rechercheString(annee,info) || rechercheString(resume, info) || rechercheString(nPage, info) || rechercheString(editeur, info)) {
               baseRechercheTmp.push_back(_baseRecherche[i]);
            }

            else {
                for(int j = 0; j < cp->getNArticle(); j++) {
                    if(rechercheString(cp->getNomArticleI(j),info)) {
                        baseRechercheTmp.push_back(_baseRecherche[i]);
                        break;
                    }
                }
            }
        }

    }


    cout << "Recherche effectuee" << endl;

    _baseRecherche.clear();  //On efface alors la base de recherche et on recopie la base de recherche temporaire dans la base de recherche

    for(unsigned i = 0 ; i < baseRechercheTmp.size(); i++) {
        _baseRecherche.push_back(baseRechercheTmp[i]);
    }

    baseRechercheTmp.clear(); //On efface la base de recherche temporaire

    unsigned nResultat = static_cast<unsigned>(_baseRecherche.size());
    if (nResultat > 0) {//On indique le nombre de resultats à l'utilisateur
        cout << "Resultats trouves : " << nResultat << ". Veuillez inscrire la commande LIST pour les afficher" << endl;
    }
    else
        cout << "Pas de resultat" << endl;
}

void Mediatheque::clear() { //On reinitialise la base de recherche avec la base de donnees

    _baseRecherche.clear();

    for (unsigned i =0; i < static_cast<unsigned>(_baseDonnees.size()); i++) {

        _baseRecherche.push_back((_baseDonnees[i]));
    }


    cout << "La base de recherche a ete reinitialisee" << endl;
}

void Mediatheque::list() { //On affiche les infos de base des ressources de la base de recherche

    if(_baseDonnees.size() == _baseRecherche.size())
        cout << "La mediathèque contient : " << _baseRecherche.size() << " ressources." << endl;

    else
        cout << "La recherche precedente a donne : " << _baseRecherche.size() << " resultat(s)" << endl;

    cout << "Voici la liste :" << endl;
    cout << "ID \t - \t Type \t - \t Nom \t - \t Auteur" << endl;

    for (unsigned  i =0; i < static_cast<unsigned>(_baseRecherche.size()); i++) {
        _baseRecherche[i]->list();
    }
}
