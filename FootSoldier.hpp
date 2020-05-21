//
// Created by shaharnik on 19/05/2020.
//

#ifndef UNTITLED5_FOOTSOLDIER_HPP
#define UNTITLED5_FOOTSOLDIER_HPP


#include "Soldier.hpp"
#include <iostream>

class FootSoldier : public Soldier {
public:
    //int health_points;
    //int damage_per_activity;
    //int playerNum;
public:

    FootSoldier(int playerNum) : Soldier(playerNum, 10, 100){std::cout << "Foot Soldier built for player:"<<playerNum<<std::endl;};

    void specialMove() // need to check how use override keyword
    {
        std::cout << "perform foot-soldier special move" << std::endl;
    }
};



#endif //UNTITLED5_FOOTSOLDIER_HPP
