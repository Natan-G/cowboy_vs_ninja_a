#include <iostream>
#include <string>
#include "Character.hpp"

using namespace std;

namespace ariel{

    Character::Character() : _point(0.0 , 0.0) , _hit_points(0){};
    Character::Character(int hit_point ,const string& name , const Point &point) : _hit_points(hit_point) , _name(name) , _point(point){};
    Character::~Character(){};

    bool Character::isAlive(){
        return true;
    }

    double Character::distance(Character* other){
        return 0.0;
    }

    string Character::print(){
        return _name;
    }

    void Character::hit(int num){
        
    }
    
    string Character::getName(){
        return _name;
    }
    Point Character::getLocation(){
        return _point;
    }

    int Character::getHitPointsLeft(){
        return _hit_points;
    }


}