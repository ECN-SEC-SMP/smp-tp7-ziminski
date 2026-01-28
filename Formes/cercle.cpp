/*
=============================================================================
Nom du fichier      : Cercle.cpp
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

#include "cercle.h"
#include "math.h"

/*
-------------------------------------------------------------------------
* *   Implémentation des fonctions
-------------------------------------------------------------------------- 
*/

Cercle::Cercle(){
    this->rayon = 0;
    this->centre = Point();
}

Cercle::Cercle(Point centre){
    this->rayon = 0;
    this->centre = centre;
}

Cercle::Cercle(float rayon){
    this->rayon = rayon;
    this->centre = Point();
}

Cercle::Cercle(Point centre, float rayon){
    this->rayon = rayon;
    this->centre = centre;
}

float Cercle::perimetre(){
    return 2 * M_PIf * this->rayon;
}

float Cercle::surface(){
    return M_PIf * this->rayon * this->rayon;
}