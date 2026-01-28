/*
=============================================================================
Nom du fichier      : Forme.h
Autheurs            : Aymeric ZIMINSKI / Zaryus, Jean-Marc KERVIL
Email               : aymeric.ziminski@gmail.com
Date de création    : 28/01/2026
Version             : 1.0
Description         : Fichier d'entête pour Forme.cpp
Compilateur Machine : G++ (13.3.0)
=============================================================================
*/

/*
--------------------------------------------------------------------------
* *   Importation des modules
-------------------------------------------------------------------------- 
*/

#include "Point.h"

/*
--------------------------------------------------------------------------
* *   Définition des fonctions / Classes
-------------------------------------------------------------------------- 
*/

class Forme {
    private: 
        Point centre;
    public:
        /*
        --------------------------------------------------------------------------
        * *   Constructeurs
        -------------------------------------------------------------------------- 
        */
        /**
         * @brief Constructeur de la forme
         * 
         * Complexité : 
         *  - Temps     : O(1)
         *  - Mémoire   : O(1)
         */
        Forme();

        /**
         * @brief Construct a new Forme object
         * 
         * @param centre 
         * 
         * Complexité : 
         *  - Temps     : O(1)
         *  - Mémoire   : O(1)
         */
        Forme(Point centre);

        /*
        --------------------------------------------------------------------------
        * *   Méthodes
        -------------------------------------------------------------------------- 
        */
        virtual float perimetre() = 0; 
        virtual float surface() = 0;

        /*
        --------------------------------------------------------------------------
        * *   Surchage d'opérateurs
        -------------------------------------------------------------------------- 
        */
        /**
         * @brief Translater la forme avec le vecteur origine, point
         * 
         * @param point 
         * 
         * Complexité : 
         *  - Temps     : O(1)
         *  - Mémoire   : O(1)
         */
        void operator+=(Point const& point);

        friend ostream& operator<<(ostream& s, const Forme& f);

};

ostream& operator<<(ostream& s, const Forme& f);



