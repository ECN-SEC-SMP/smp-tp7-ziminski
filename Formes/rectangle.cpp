/*
=============================================================================
Nom du fichier      : rectangle.cpp
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

#include "rectangle.h"

/*
-------------------------------------------------------------------------
* *   Implémentation des fonctions
-------------------------------------------------------------------------- 
*/

Rectangle::Rectangle(){
    this->centre = Point();
    this->longueur = 0; 
    this->largeur = 0; 
}

Rectangle::Rectangle(Point centre, float longueur, float largeur){
    this->centre = centre;
    this->longueur = longueur; 
    this->largeur = largeur;
}

float Rectangle::perimetre(){
    return 2*(this->longueur + this->largeur);
}

float Rectangle::surface(){
    return this->longueur*this->largeur;
}



