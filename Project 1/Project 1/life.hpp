//
//  life.hpp
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#ifndef life_hpp
#define life_hpp
class World;

class Life {
public:
    
    // Accessors or Getters
    int getCol() const;
    int getRow() const;
    int getHeight() const;
    int getWidth() const;
    char getFromFigure(int r, int c) const;
    
protected:
    int m_col;
    int m_row;
    int m_height;
    int m_width;
    char **m_figure;
    World *m_world;
};

#endif /* life_hpp */
