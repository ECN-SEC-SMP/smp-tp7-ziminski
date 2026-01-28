#include "main.h"


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
