#pragma once
#include <iostream>
#include "Character.hpp"

using namespace std;

namespace ariel{

    class Ninja : public Character{

        private:
            int _speed;
            string _name;


        public:

            Ninja(const string &ninja_name , const Point &point);
            void move(Character *enemy);
            void slash(Character *enemy);
            virtual string print();
            
            int getSpeed();
        

    };

    class OldNinja : public Ninja{

        private:
        const int _speed;

        public:
            OldNinja(const string &ON_name , const Point &point); 

    };

    class YoungNinja : public Ninja{

        private:
            const int _speed;

        public:
            YoungNinja(const string &YN_name , const Point &point);
    
    
    };

    class TrainedNinja : public Ninja{

        private:
            const int _speed;

        public:
            TrainedNinja(const string &TN_name , const Point &point);

    };
    




}