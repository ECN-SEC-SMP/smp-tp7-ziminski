#include <iostream>

using namespace std;

class Point
{
private:
    /* data */
    float x;
    float y;
public:
    

    Point();
    Point(float x, float y);
    Point(Point const &c);


    ~Point();
    
    void translater(Point c);
    void translater(float x, float y);

    float getX();
    float getY();

    void setX(float x = 0);
    void setY(float y = 0);
};

