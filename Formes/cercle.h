/*
=============================================================================
Nom du fichier      : cercle.h
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
#ifndef H_CERCLE
#define H_CERCLE
#include "../Forme.h"

/*
--------------------------------------------------------------------------
* *   Définition des fonctions / Classes
-------------------------------------------------------------------------- 
*/

class Cercle : public Forme {
    private:
        float rayon;
    
    public:

        /**
         * @brief Constructeur pour un cercle de rayon 0 et de centre l'origine
         * 
         */
        Cercle();

        /**
         * @brief Constructeur pour un cercle de rayon 0 et de centre centre
         * 
         * @param centre 
         */
        Cercle(Point centre);

        /**
         * @brief Constructeur pour un cercle de rayon rayon et de centre l'origine
         * 
         * @param rayon 
         */
        Cercle(float rayon);

        /**
         * @brief Constructeur pour un cercle de centre centre et de rayon rayon
         * 
         * @param centre 
         * @param rayon 
         */
        Cercle(Point centre, float rayon);



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


        /*
        --------------------------------------------------------------------------
        * *   Surchage d'opérateurs
        -------------------------------------------------------------------------- 
        */


        friend ostream& operator<<(ostream& s, const Cercle& c);
};

ostream& operator<<(ostream& s, const Cercle& c);
#endif