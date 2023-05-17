#include <iostream>
#include <string>
#include "Ninja.hpp"

using namespace std;

namespace ariel{

    Ninja::Ninja(const string &ninja_name , const Point &point) : Character(110,ninja_name, point){

    }

    void Ninja::move(Character *enemy){

    }
    void Ninja::slash(Character *enemy){

    }
    string Ninja::print(){
        return _name;
    }

    int Ninja::getSpeed(){
        return _speed;
    }

    OldNinja::OldNinja(const string &ON_name , const Point &point): Ninja(ON_name , point) , _speed(8){

    }

    YoungNinja::YoungNinja(const string &YN_name , const Point &point) : Ninja(YN_name , point) , _speed(14){

    }

    TrainedNinja::TrainedNinja(const string &TN_name , const Point &point) : Ninja(TN_name , point) , _speed(12){
        
    }




}