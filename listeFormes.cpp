/*
=============================================================================
Nom du fichier      : listeFormes.cpp
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

#include "listeFormes.h"


/*
-------------------------------------------------------------------------
* *   Implémentation des fonctions
-------------------------------------------------------------------------- 
*/

ListeFormes::ListeFormes(){

}

float ListeFormes::surfaceTotale(){
    float s = 0; 
    for(int i = 0; i < this->tab.size(); i++){
        s += this->tab[i].surface();
    }

    return s;
}

Rectangle ListeFormes::boiteAnglobante(){
    //TODO
}