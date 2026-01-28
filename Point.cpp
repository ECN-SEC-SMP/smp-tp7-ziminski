#include "Point.h"



Point::Point(){
    this->x = 0; 
    this->y = 0;
}

Point::Point(float x, float y){
    this->x = x; 
    this->y = y;
}

Point::Point(Point const &c){
    this->x = c.x;
    this->y = c.y;
}

Point::~Point(){}


void Point::translater(Point c){
    this->x += c.x;
    this->y += c.y;
}

void Point::translater(float x, float y){
    this->x += x;
    this->y += y;
}

float Point::getX() const{
    return this->x;
}

float Point::getY() const{
    return this->y;
}

void Point::setX(float x = 0){
    this->x = x;
}

void Point::setY(float y = 0){
    this->y = y;
}


ostream& operator<<(ostream& s, Point const &p){
    s << "(" << p.getX() << "; " << p.getY() << ")";
    return s;
}

Point& operator+=(Point& p1, Point const&p2){
    p1.translater(p2);

    return p1;
}
