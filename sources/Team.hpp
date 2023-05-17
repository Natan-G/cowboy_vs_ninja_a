#pragma once
#include <iostream>
#include <string>
#include "Character.hpp"
#include "Ninja.hpp"
#include "Cowboy.hpp"

using namespace std;

namespace ariel{

    class Team : public Character{

        private:
            Character *_pleader;
            

        public:
            Team(Character *leader);
            void add(Character *character);
            void attack(Team *enemy);
            int stillAlive();
            virtual string print();
            
            int getTeamSize();
            Character* getLeader();

    };


}