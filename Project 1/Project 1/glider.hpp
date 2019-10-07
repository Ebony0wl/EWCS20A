//
//  glider.hpp
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#ifndef glider_hpp
#define glider_hpp

#include "life.hpp"

class Glider : public Life {
public:
    // Constructor/destructor
    Glider(int r, int c);
    ~Glider();
};

#endif /* glider_hpp */
