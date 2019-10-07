//
//  globals.h
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#ifndef globals_h
#define globals_h

const int MAX_ROWS = 11;
const int MAX_COLS = 11;

const int BLINKER_HEIGHT = 3;
const int BLINKER_WIDTH = 1;

const int GLIDER_SIZE = 3;

const int MAX_STEPS = 50;

const char ALIVE = 'X';
const char DEAD = '.';

void clearScreen();
void delay(int ms);

#endif /* globals_h */
