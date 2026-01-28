#include <iostream>
#include "Point.h"
#include "Formes/cercle.h"
#include "Formes/rectangle.h"
#include "Formes/carree.h"

using namespace std;

int main(){
    cout << "========================================" << endl;
    cout << "     TEST DES DIFFÉRENTES FORMES        " << endl;
    cout << "========================================" << endl << endl;

    // Test CERCLE
    cout << "--- TEST CERCLE ---" << endl;
    Cercle c1;
    cout << "Cercle par défaut (rayon=0, centre=(0,0))" << endl;
    cout << c1 << endl;

    Cercle c2(Point(5, 5));
    cout << "Cercle avec centre=(5,5), rayon=0" << endl;
    cout << c2 << endl;

    Cercle c3(Point(10, 10), 7.5);
    cout << "Cercle avec centre=(10,10), rayon=7.5" << endl;
    cout << c3 << endl;
    cout << "Surface: " << c3.surface() << endl;
    cout << "Périmètre: " << c3.perimetre() << endl;
    cout << endl;

    // Test RECTANGLE
    cout << "--- TEST RECTANGLE ---" << endl;
    Rectangle r1;
    cout << "Rectangle par défaut (0,0,0,0)" << endl;
    cout << r1 << endl;

    Rectangle r2(Point(0, 0), 10, 5);
    cout << "Rectangle centre=(0,0), longueur=10, largeur=5" << endl;
    cout << r2 << endl;
    cout << "Surface: " << r2.surface() << endl;
    cout << "Périmètre: " << r2.perimetre() << endl;

    Rectangle r3(Point(15, 15), 8, 6);
    cout << "Rectangle centre=(15,15), longueur=8, largeur=6" << endl;
    cout << r3 << endl;
    cout << "Surface: " << r3.surface() << endl;
    cout << "Périmètre: " << r3.perimetre() << endl;
    cout << endl;

    // Test CARRÉ
    cout << "--- TEST CARRÉ ---" << endl;
    Carree sq1;
    cout << "Carré par défaut (0,0,0)" << endl;
    cout << sq1 << endl;

    Carree sq2(Point(0, 0), 5);
    cout << "Carré centre=(0,0), côté=5" << endl;
    cout << sq2 << endl;
    cout << "Surface: " << sq2.surface() << endl;
    cout << "Périmètre: " << sq2.perimetre() << endl;

    Carree sq3(Point(20, 20), 8);
    cout << "Carré centre=(20,20), côté=8" << endl;
    cout << sq3 << endl;
    cout << "Surface: " << sq3.surface() << endl;
    cout << "Périmètre: " << sq3.perimetre() << endl;
    cout << endl;

    // Comparaisons
    cout << "========================================" << endl;
    cout << "          COMPARAISONS D'AIRES          " << endl;
    cout << "========================================" << endl;
    cout << "Cercle (rayon=7.5): " << c3.surface() << endl;
    cout << "Rectangle (10x5): " << r2.surface() << endl;
    cout << "Carré (côté=8): " << sq3.surface() << endl;
    cout << endl;

    return 0;
}
