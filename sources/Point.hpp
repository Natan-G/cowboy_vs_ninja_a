#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

namespace ariel{
    class Point{
        
        private:
            
            double _x_axis;
            double _y_axis;

        public:
            Point(double x , double y);
            ~Point();
            double distance(const Point& other);
            static Point moveTowards(const Point curr_point , const Point target_point , double distance);
            friend ostream& operator<< (ostream& output , const Point& p);

            double getX();
            double getY();

    };










}