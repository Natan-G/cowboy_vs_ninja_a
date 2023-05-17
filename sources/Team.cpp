#include <istream>
#include "Team.hpp"

using namespace std;

namespace ariel{


    Team::Team(Character *leader){
        this->_pleader = leader;
    }

    void Team::add(Character *character){

    }
    void Team::attack(Team *enemy){

    }

    int Team::stillAlive(){
        return 0;
    }

    string Team::print(){
        return _name;
    }

    int Team::getTeamSize(){
        return 0;
    }

    Character* Team::getLeader(){
        Cowboy *c = new Cowboy("a" , Point(0,0));
        return c;
    }








}