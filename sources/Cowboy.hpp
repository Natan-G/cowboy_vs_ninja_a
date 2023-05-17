#pragma once
#include <iostream>
#include <string>
#include "Character.hpp"

using namespace std;

namespace ariel{

    class Cowboy : public Character{

        private:
            int _bullet_num;


        public:
            Cowboy(const string cowboy_name , Point point);
            void shoot(Character *enemy);
            bool hasboolets();
            void reload();
            virtual string print();

            int getBulletLeft();

    };







}