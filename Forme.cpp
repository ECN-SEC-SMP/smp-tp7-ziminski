/*
=============================================================================
Nom du fichier      : Forme.cpp
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

#include "Forme.h"

/*
-------------------------------------------------------------------------
* *   Implémentation des fonctions
-------------------------------------------------------------------------- 
*/

Forme::Forme(){
    this->centre = Point();
}

Forme::Forme(Point centre){
    this->centre = centre;
}

void Forme::operator+=(Point const& point){
    this->centre += point;
}

ostream& operator<<(ostream& s, const Forme& f){
    s << f.centre;

    return s;
}