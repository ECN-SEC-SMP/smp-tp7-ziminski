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

    float getX() const;
    float getY() const;

    void setX(float x);
    void setY(float y);

};

ostream& operator<<(ostream& s, Point const& p);
Point& operator+=(Point& p1, Point const& p2);