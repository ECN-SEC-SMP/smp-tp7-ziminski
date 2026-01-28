#include "Point.h"

int main(){
    Point p1 = Point();
    Point p2 = Point(14, 10);

    p1.setX(3);
    p1 += p2; 

    cout << p1 << endl;
    return 0;
}
