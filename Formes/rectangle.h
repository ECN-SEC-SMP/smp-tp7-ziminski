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
#ifndef H_RECTANGLE
#define H_RECTANGLE
#include "../Forme.h"

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
        /*
        --------------------------------------------------------------------------
        * *   Constructeurs
        -------------------------------------------------------------------------- 
        */

        /**
         * @brief Construit un rectangle au point (0, 0) et de largeur et longueur 0. 
         * 
         */
        Rectangle();

        /**
         * @brief Construit un rectangle au point centre, de longueur longueur et largeur largeur.
         * 
         * @param centre 
         * @param longueur 
         * @param largeur 
         */
        Rectangle(Point centre, float longueur, float largeur);
        /*
        --------------------------------------------------------------------------
        * *   Méthodes
        -------------------------------------------------------------------------- 
        */

        /**
         * @brief Récupération du périmètre de la forme
         * 
         * @return float 
         */
        float perimetre();

        /**
         * @brief Récupération de la surface de la forme
         * 
         * @return float 
         */
        float surface();


        friend ostream& operator<<(ostream& s, const Rectangle& r);
};

ostream& operator<<(ostream& s, const Rectangle& r);
#endif