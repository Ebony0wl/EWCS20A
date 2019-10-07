//
//  main.cpp
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include <iostream>
#include "life.hpp"
#include "blinker.hpp"
#include "glider.hpp"
#include "game.hpp"
#include "world.hpp"
#include "stats.hpp"



int main() {

    Life **population = new Life*[2];

//    population[0] = new Blinker(4, 5); //blinker alone
//    int numLife = 1;

//    population[0] = new Glider(0,0); //glider alone
//    int numLife = 1;


    population[0] = new Glider(0, 0); // Blinker and Glider
    population[1] = new Blinker(4, 5);
    int numLife = 2;

    // Create the game
    Game g(population, numLife);

    // Run the game
    g.play();

    // Clean up
    delete population[0];
    delete population[1];
    delete[] population;


}


