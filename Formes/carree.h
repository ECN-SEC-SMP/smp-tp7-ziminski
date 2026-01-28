/*
=============================================================================
Nom du fichier      : carree.h
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
        /*
        --------------------------------------------------------------------------
        * *   Constructeur
        -------------------------------------------------------------------------- 
        */

        /**
         * @brief Constructeur d'un carrée de centre l'origine et de coté 0
         * 
         */
        Carree();

        /**
         * @brief Constructeur d'un carrée de centre centre et de coté cote
         * 
         * @param centre 
         * @param cote 
         */
        Carree(Point centre, float cote);


        /*
        --------------------------------------------------------------------------
        * *   Surchage d'opérateurs
        -------------------------------------------------------------------------- 
        */
        friend ostream& operator<<(ostream& s, const Carree& c);
};

ostream& operator<<(ostream& s, const Carree& c);