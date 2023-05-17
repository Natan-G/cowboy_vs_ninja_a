#include <iostream>
#include <string>
#include "Cowboy.hpp"

using namespace std;

namespace ariel{
    
    Cowboy::Cowboy(const string cowboy_name , Point point): Character(110 , cowboy_name , point) , _bullet_num(6){};

    void Cowboy::shoot(Character* enemy){

    }

    bool Cowboy::hasboolets(){
        return true;
    }
    void Cowboy::reload(){

    }

    string Cowboy::print(){
        return _name;
    }

    int Cowboy::getBulletLeft(){
        return _bullet_num;
    }
    

}