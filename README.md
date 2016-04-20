# mediatheque
Développement d'une application permettant de gérer la disponibilité de l'ensemble des ressources d'une médiathèque.

Ici reposera les informations des différentes parties implémentées.

Done (18/04):
	- Les différentes classes ressources
	- La classe médiathèque
	- La classe utilisateur
	- Interface utilisateur en version console
	- Implémentation de commandes : load, bye, reset, show, delete, save, add, search, clear, list

	***V1 fonctionnelle***

To do :
	

Améliorations possibles :
	- Gestion utilisateur
	- Interface graphique
	- faire la base de données propre en SQL et plus en C++ dégueulasse
	- Accent insensitive pour la reconnaissance des commandes (case insensitive done)


Problématiques :
	- je ne suis pas sûr des fonctions qui désallouent les données (bye) et si lorsque je crée des copie de ressources (tmp ou cp) ou du vector _baseRecherche (baseRechercheTmp), sont-elles supprimées à la fin de la fonction ?
		*** A voir avec Legal

