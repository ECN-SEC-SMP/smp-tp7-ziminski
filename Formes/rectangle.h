/*
=============================================================================
Nom du fichier      : rectangle.h
Autheurs            : Aymeric ZIMINSKI / Zaryus, Jean-Marc KERVIL
Email               : aymeric.ziminski@gmail.com
Date de création    : 28/01/2026
Version             : 1.0
Description         : Fichier d'entête pour rectangle.cpp
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

class Rectangle : public Forme {
    protected: 
        float longueur; // Nous souhaitons pouvoir y accéder pour le carrée
        float largeur; 
    
    public:
        Rectangle();
        Rectangle(Point centre, float longueur, float largeur);

        float permietre();
        float surface();
};