#include "doctest.h"
#include "sources/Team.hpp"

#include <iostream>
#include <sstream>
#include <iomanip>

using namespace ariel;

TEST_CASE("Point class"){
    
    CHECK_NOTHROW(Point(1.5,1.5););
    CHECK_NOTHROW(Point(-1.5,-1.5););
    Point p0(0,0);
    Point p1(1.5 , 1.5);
    Point p2(-1.5 , -1.5);
    
    CHECK(p1.getX() == 1.5);
    CHECK(p1.getY() == 1.5);
    CHECK(p2.getX() != 1.5);
    CHECK(p2.getY() != 1.5);

    SUBCASE("distance function"){
        CHECK_EQ(p0.distance(p1) , p1.distance(p0));
        CHECK_EQ(p0.distance(p1) , p0.distance(p2));
        CHECK_EQ(p1.distance(p2) , p2.distance(p1));
        
        CHECK_NE(p1.distance(p0) , p1.distance(p2));
    }

    SUBCASE("moveTowards function"){
        CHECK_THROWS(Point::moveTowards(p0, p1 , -1));

        Point p3(Point::moveTowards(p0,p1 , 2.3));
        CHECK(p3.getX() == p1.getX());
        CHECK(p3.getY() == p1.getY());

        Point p4(Point::moveTowards(p0 , p2 , 2.3));
        CHECK(p4.getX() == p2.getX());
        CHECK(p4.getY() == p2.getY());
        
        Point p5(Point::moveTowards(p1 , p2 , 4.25));
        CHECK(p5.getX() == p2.getX());
        CHECK(p5.getY() == p2.getY());
    }
}

TEST_CASE("classes initiallization"){
    SUBCASE("Cowboy"){
        
        CHECK_NOTHROW(Cowboy cowboy("a" , Point(0,0)));
        Cowboy c1("Natan" , Point(0,1));
        CHECK_EQ(c1.getName() , "Natan");
        CHECK(c1.isAlive());
        CHECK(c1.hasboolets());
        CHECK_EQ(c1.getBulletLeft(),6);
        c1.hit(10);
        CHECK_EQ(c1.getHitPointsLeft() , 100);
        CHECK_EQ(c1.getLocation().getX() , 1.0);
        CHECK_EQ(c1.getLocation().getY() , 0.0);
        CHECK_EQ(c1.getLocation().distance(Point(6,0)),5);
        CHECK_EQ(c1.getLocation().distance(Point(-6,0)),7);
    }

    SUBCASE("YoungNinja"){
        CHECK_NOTHROW(YoungNinja("aa" , Point(0,1)));
        YoungNinja YN("Natan" , Point(0,2));
        CHECK_EQ(YN.getName() , "Natan");
        CHECK_NE(YN.getName() , "Yossi");
        CHECK(YN.isAlive());
        CHECK_EQ(YN.getSpeed() , 14);
        CHECK_EQ(YN.getHitPointsLeft() , 100);
        YN.hit(10);
        CHECK_EQ(YN.getHitPointsLeft() , 90);
        
        CHECK_EQ(YN.getLocation().getX() , 0);
        CHECK_EQ(YN.getLocation().getX() , 1);
        CHECK_EQ(YN.getLocation().distance(Point(0,-1)) , 2);
    }

    SUBCASE("TrainedNinja"){
        CHECK_NOTHROW(TrainedNinja("bb" , Point(0,1)));
        TrainedNinja TN("Natan" , Point(2,0));
        CHECK_EQ(TN.getName() , "Natan");
        CHECK(TN.isAlive());
        CHECK_EQ(TN.getSpeed() , 12);
        CHECK_EQ(TN.getHitPointsLeft() , 120);
        TN.hit(20);
        CHECK_EQ(TN.getHitPointsLeft() , 100);
        CHECK_EQ(TN.getLocation().getX() , 2);
        CHECK_EQ(TN.getLocation().getY() , 0);
    }

    SUBCASE("OldNinja"){
        CHECK_NOTHROW(OldNinja("cc" , Point(-1,-1)));
        OldNinja ON("Natann" , Point(0,0));
        CHECK_EQ(ON.getName() , "Natann");
        CHECK_EQ(ON.getSpeed() , 8);
        CHECK_EQ(ON.getHitPointsLeft() , 150);
        ON.hit(40);
        CHECK_EQ(ON.getHitPointsLeft() , 110);
    }

    SUBCASE("Team"){
        Cowboy *c = new Cowboy("Cowboy", Point(1,1));
        OldNinja *ON = new OldNinja("OldNinja" , Point(2,2));
        Team team(c);
        CHECK_EQ(team.stillAlive() , 1);
        CHECK_EQ(team.getLeader()->getName() , "Cowboy");
        string s = "a";
        for(int i=1 ; i<10 ; i++){
            team.add(new Cowboy(s+="a" , Point(i,i)));
        }
        CHECK_EQ(team.stillAlive() , 10);
        CHECK_THROWS(team.add(new Cowboy("q" , Point(0,0))));
    }

}
