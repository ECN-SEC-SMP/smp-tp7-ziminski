/*
=============================================================================
Nom du fichier      : Point.h
Autheurs            : Aymeric ZIMINSKI / Zaryus, Jean-Marc KERVIL
Email               : aymeric.ziminski@gmail.com
Date de création    : 28/01/2026
Version             : 1.0
Description         : Fichier d'entête pour Point.cpp
Compilateur Machine : G++ (13.3.0)
=============================================================================
*/

/*
--------------------------------------------------------------------------
* *   Importation des modules
-------------------------------------------------------------------------- 
*/
#include <iostream>

using namespace std;


/*
--------------------------------------------------------------------------
* *   Définition des fonctions / Classes
-------------------------------------------------------------------------- 
*/

/**
 * @brief Classe Point (x, y)
 * 
 */
class Point
{
private:
    float x;
    float y;
public:
    
    /**
     * @brief Construct a new Point object
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    Point();

    /**
     * @brief Construct a new Point object
     * 
     * @param x : première coordonnée du point
     * @param y : seconde coordonnée du point
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    Point(float x, float y);

    /**
     * @brief Construct a new Point object à partir d'un autre point
     * 
     * @param c : Point à copier
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    Point(Point const &c);

    /**
     * @brief Destroy the Point object
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    ~Point();
    
    /**
     * @brief Permet de translater le Point par rapport au vecteur d'origine vers le Point c.
     * 
     * @param c
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1) 
     */
    void translater(Point c);

    /**
     * @brief Permet de translater le Point par rapport au vecteur d'origine vers le Point (x,y)
     * 
     * @param x 
     * @param y 
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    void translater(float x, float y);

    /**
     * @brief Récupérer la première coordonnée du point
     * 
     * @return float 
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    float getX() const;

    /**
     * @brief Récupérer la seconde coordonnée du point
     * 
     * @return float 
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    float getY() const;

    /**
     * @brief Mettre la première coordonné à une certaine valeur x
     * 
     * @param x 
     * 
     * Complexité : 
     *  - Temps     : O(1)
     *  - Mémoire   : O(1)
     */
    void setX(float x);

    /**
     * @brief Mettre la seconde coordonnée à une certaine valeur y
     * 
     * @param y 
     */
    void setY(float y);

};

/**
 * @brief Permet la récupérarion d'un ostream pour l'affichage du Point
 * 
 * @param s 
 * @param p 
 * @return ostream& 
 * 
 * Complexité : 
 *  - Temps     : O(1)
 *  - Mémoire   : O(1)
 */
ostream& operator<<(ostream& s, Point const& p);

/**
 * @brief Permet d'ajouter un point à un autre
 * 
 * @param p1 
 * @param p2 
 * @return Point& 
 * 
 * Complexité : 
 *  - Temps     : O(1)
 *  - Mémoire   : O(1)
 */
Point& operator+=(Point& p1, Point const& p2);