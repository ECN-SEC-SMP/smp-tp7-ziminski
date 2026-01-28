

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

    float getX(){
        return this->x;
    }

    float getY(){
        return this->y;
    }

    void setX(float x = 0){
        this->x = x; 
    }

    void setY(float y = 0){
        this->y = y;
    }
};

