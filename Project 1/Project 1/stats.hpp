//
//  stats.hpp
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#ifndef stats_hpp
#define stats_hpp

class Stats {
public: // Constructor/destructor
    Stats();
    ~Stats();
    
    // Accessors or Getters
    void display() const;
    
    // Mutators or Setters
    bool record(int r, int c, int val);
    
private:
    // TODO: You will need to determine what structure is appropriate
    int m_row, m_col, m_val;
    char **m_world;
};


#endif /* stats_hpp */
