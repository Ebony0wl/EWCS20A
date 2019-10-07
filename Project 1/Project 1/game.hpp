//
//  game.hpp
//  Project 1
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#ifndef game_hpp
#define game_hpp

class Life;
class World;

class Game {
public:
    // Constructor/destructor
    Game(Life **life, int numLife);
    ~Game();
    
    // Mutators
    void play();
private:
    World * m_world;
    int m_steps;
    bool m_automate;
};

#endif /* game_hpp */
