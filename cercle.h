/*
=============================================================================
Nom du fichier      : Forme.h
Autheurs            : Aymeric ZIMINSKI / Zaryus, Jean-Marc KERVIL
Email               : aymeric.ziminski@gmail.com
Date de création    : 28/01/2026
Version             : 1.0
Description         : Fichier d'entête pour cercle.cpp
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
--------------------------------------------------------------------------
* *   Définition des fonctions / Classes
-------------------------------------------------------------------------- 
*/

class Cercle : public Forme {
    private:
        float rayon;
    
    public:
        Cercle();
        Cercle(Point centre);
        Cercle(float rayon);
        Cercle(Point centre, float rayon);



        float perimetre();
        float surface();
};