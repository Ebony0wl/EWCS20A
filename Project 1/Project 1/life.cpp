//
//  life.cpp
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include "life.hpp"

int Life::getCol() const {
    return m_col;
}
int Life::getRow() const {
    return m_row;
}
int Life::getHeight() const {
    return m_height;
}
int Life::getWidth() const {
    return m_width;
}
char Life::getFromFigure(int r, int c) const {
    return m_figure[r][c];
}
