//
//  main.cpp
//  Midterm_pratice
//
//  Created by Ebony Warren on 10/14/18.
//  Copyright © 2018 CS20A. All rights reserved.
//
//
//#include <iostream>
//using namespace std;
//class Legs {
//public:
//    void move() { cout << "B"; }
//};
//class Animal {
//public:
//    Animal() {
//        const int nlegs =6;
//        num_legs = nlegs; legs = new Legs[num_legs];}
//    Animal(const Animal &other){ /*Assume Complete*/}
//    virtual ~Animal() { delete[] legs; }
//    //Animal &operator=(const Animal &other) { /*Assume Complete*/ }
//    void walk() {
//        for (Legs* leg = legs; leg < legs + num_legs; leg++)
//        leg->move();
//        
//    }
//    void play() { cout << "Herpa Derp" << endl; };
//    virtual void eat() = 0;
//    virtual void dance() = 0;
//private:
//    int num_legs;
//    Legs *legs;
//};
//class Bear : public Animal {
//public:
//    Bear() { num_honey = 99; honey = new int[num_honey]; }
//    
//    Bear(const Bear &other) {
//        honey = new int;
//        *honey = *other.honey;
//        num_honey = other.num_honey;
//        
//    }
//    virtual ~Bear() { delete [] honey; }
//    Bear &operator=(const Bear &other) {
//        delete honey;
//        honey = new int;
//        *honey = *other.honey;
//        num_honey = other.num_honey;
//
//        return *this;
//    }
//    void play() { cout << "Doo Bee Doo" << endl; }
//    virtual void eat() { cout << "Yum Salmon" << endl; }
//    virtual void hibernate() { cout << "ZZZZ" << endl; }
//    virtual void dance() {
//    };
//private:
//    int *honey;
//    int num_honey;
//};
//class Panda : public Bear {
//public:
//    Panda() {};
//    virtual ~Panda() {};
//    virtual void eat() { cout << "Yum Bamboo" << endl; }
//    virtual void dance() { cout << "Pop and Lock" << endl; }
//};
//
//
//int main() {
//    Animal* p = new Panda();
//    p->walk();
//    cout<<endl;
//    p->play();
//    p->eat();
//    p->dance();
//    p->hibernate();
//    return 0;
//
//
//}
