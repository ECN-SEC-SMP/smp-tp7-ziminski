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

float Point::getX(){
    return this->x;
}

float Point::getY(){
    return this->y;
}

void Point::setX(float x = 0){
    this->x = x;
}

void Point::setY(float y = 0){
    this->y = y;
}