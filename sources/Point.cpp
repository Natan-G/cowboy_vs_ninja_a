#include <iostream>
#include <string>
#include "Point.hpp"

using namespace std;

namespace ariel{
    

    Point::Point(double x, double y) : _x_axis(x) , _y_axis(y){};
    
    Point::~Point(){};

    double Point::distance(const Point& other){
        return 0.0;
    }

    Point Point::moveTowards(const Point curr_point , const Point target_point , double distance){
        Point p(0.0 ,0.0);
        return p;
    }

    ostream& operator<< (ostream& output , const Point& p){
        output << '(' << p._x_axis << p._y_axis << ')';
        return output;
    }

    double Point::getX(){
        return _x_axis;
    }
    double Point::getY(){
        return _y_axis;
    }







}