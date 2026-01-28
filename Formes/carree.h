/*
=============================================================================
Nom du fichier      : Forme.h
Autheurs            : Aymeric ZIMINSKI / Zaryus, Jean-Marc KERVIL
Email               : aymeric.ziminski@gmail.com
Date de création    : 28/01/2026
Version             : 1.0
Description         : Fichier d'entête pour carree.cpp
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
--------------------------------------------------------------------------
* *   Définition des fonctions / Classes
-------------------------------------------------------------------------- 
*/

class Carree : public Rectangle {    
    public:
        Carree();
        Carree(Point centre, float cote);
};