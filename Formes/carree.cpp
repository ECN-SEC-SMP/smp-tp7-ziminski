/*
=============================================================================
Nom du fichier      : carree.cpp
Autheurs            : Aymeric ZIMINSKI / Zaryus, Jean-Marc KERVIL
Email               : aymeric.ziminski@gmail.com
Date de création    : 28/01/2026
Version             : 1.0
Description         : Implémentation des méthodes 
Compilateur Machine : G++ (13.3.0)
=============================================================================
*/

/*
--------------------------------------------------------------------------
* *   Importation des modules
-------------------------------------------------------------------------- 
*/

#include "carree.h"

/*
-------------------------------------------------------------------------
* *   Implémentation des fonctions
-------------------------------------------------------------------------- 
*/

Carree::Carree(){
    this->centre = Point();
    this->longueur = 0; 
    this->largeur = 0; 
}

Carree::Carree(Point centre, float cote){
    this->centre = centre;
    this->longueur = cote;
    this->largeur  = cote;
    
}
