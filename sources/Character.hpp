#pragma once
#include <iostream>
#include <string>
#include "Point.hpp"

using namespace std;

namespace ariel{

    class Character{
        
        protected:
            
            int _hit_points;
            string _name;
            Point _point;



        public:
            Character();
            Character(int hit_point ,const string& name , const Point &point);
            virtual~Character();
            
            bool isAlive();
            double distance(Character* other);
            virtual string print();
            void hit(int num);

            string getName();
            Point getLocation();

            int getHitPointsLeft();
            


        










    };


}