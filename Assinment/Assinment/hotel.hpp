//
//  hotel.hpp
//  Assinment
//
//  Created by Ebony Warren on 9/17/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#ifndef hotel_hpp
#define hotel_hpp

const char RESERVED = 'R';
const char OCCUPIED = 'O';
const char EMPTY = 'E';
const int FLOORS = 20;
const int ROOMSPERFLOOR = 50;

class Hotel {
public:
    Hotel(); // TODO
    bool reserve(int roomNum); // TODO
    bool cancel(int roomNum); // TODO
    bool checkIn(int roomNum); // TODO
    bool checkOut(int roomNum); // TODO
    int numEmpty(int floor) const; // TODO
private:
    char m_rooms[FLOORS][ROOMSPERFLOOR];
};

#endif /* hotel_hpp */
