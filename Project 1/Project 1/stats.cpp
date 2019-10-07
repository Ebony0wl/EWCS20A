//
//  stats.cpp
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include "stats.hpp"
#include <iostream>
#include "globals.h"

Stats::Stats(){
    //inieact all member varibles to 0
    m_world = new char*[MAX_ROWS];
    for (char i = 0; i < MAX_ROWS; i++) {
        m_world[i] = new char[MAX_COLS];
    }
    for (char i = 0; i < MAX_ROWS; i++) {
        for (char j = 0; j < MAX_COLS; j++) {
            m_world[i][j] = DEAD;
        }
    }
    
}

Stats::~Stats(){
    for (char i = 0; i < MAX_ROWS; i++) {
        delete[] m_world[i];
    }
    delete[] m_world;
}

void Stats::display() const{
    for (int i = 0; i < MAX_ROWS; i++) {
        for (int j = 0; j < MAX_COLS; j++) {
            std::cout << m_world[i][j];
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
    std::cout << "Press enter to continue. \n";
    std::string action;
    getline(std::cin, action);
    void clearScreen();
}

bool Stats::record(int r, int c, int val){
    m_row = r;
    m_col = c;
    m_val = val;
    
    if( m_world[m_row][m_col] == DEAD){
        if (m_val > 9)
            m_val = 9;
        m_world[m_row][m_col] =  '0' + m_val;
        return true;
    }
    else if(m_world[m_row][m_col] < '0' + 9){
        m_world[m_row][m_col] = m_world[m_row][m_col] + m_val;
    return true;
    }
return false;
}
