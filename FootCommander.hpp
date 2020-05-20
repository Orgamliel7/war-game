//
// Created by shaharnik on 19/05/2020.
//

#ifndef UNTITLED5_FOOTCOMMANDER_HPP
#define UNTITLED5_FOOTCOMMANDER_HPP


#include "Soldier.hpp"
#include <iostream>
class FootCommander : public Soldier{
public:
    int health_points;
    int damage_per_activity;
public:
    FootCommander(int playerNum) : Soldier(playerNum), health_points(150), damage_per_activity(20){};

    void specialMove() // need to use override keyword
    {
        std::cout << "perform FootCommander special move";
    }

};


#endif //UNTITLED5_FOOTCOMMANDER_HPP
