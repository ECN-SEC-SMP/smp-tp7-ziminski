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
#ifndef H_LISTEFORMES
#define H_LISTEFORMES

#include "Forme.h"
#include "vector"
#include "Formes/rectangle.h"

class ListeFormes {
    private:
        vector<Forme> tab; 
    public:
        ListeFormes();
    
        float surfaceTotale();
        Rectangle boiteAnglobante();
        

};

#endif