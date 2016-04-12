#include "DVD.h"

using namespace std;

DVD::DVD() : VHS(){

}

DVD::DVD(string _nom) : VHS(_nom){

}

DVD::DVD(string _nom, string _auteur) : VHS(_nom, _auteur){

}

DVD::DVD(string _nom, string _auteur, float _duree) : VHS(_nom, _auteur, _duree){

}


DVD::DVD(string _nom, string _auteur, float _duree, string _prod) : VHS(_nom, _auteur, _duree, _prod) {

}

DVD::DVD(string _nom, string _auteur, float _duree, string _prod, int _nPiste) : VHS(_nom, _auteur, _duree, _prod), nPiste(_nPiste){

}

DVD::~DVD(){

}
