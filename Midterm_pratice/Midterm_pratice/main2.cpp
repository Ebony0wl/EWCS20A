//
//  main2.cpp
//  Midterm_pratice
//
//  Created by Ebony Warren on 10/14/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include "main2.hpp"
#include <iostream>
using namespace std;

class Hey {
public:
    Hey() { cout << "!"; }
    ~Hey() { cout<<"~!"; }
};
class Snap {
public:
    Snap() { cout << "Snap "; }
    ~Snap() { cout << "~Snap "; }
    Hey hey[3];
};
class Crackle {
public:
    Crackle() { cout << "Crackle "; }
    ~Crackle() { cout << "~Crackle ";}
};
class Pop {
public: Pop() { cout << "Pop "; }
    ~Pop() { cout << "~Pop "; }
};
class Rice : public Pop {
public:
    Rice() { cout << "Rice "; }
    ~Rice() { cout << "~Rice "; }
};
class Kris :public Crackle{
public:
    Kris() { cout << "Kris "; }
    ~Kris() { cout << "~Kris "; }
    Rice rice;
};
class Pies : public Snap {
public:
    Pies() { cout << "Pies "; }
    ~Pies() { cout << "~Pies "; }
    Kris kris; };
int main(){ Pies pies; cout << endl << "===" << endl; }
