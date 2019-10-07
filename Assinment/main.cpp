

#include <iostream>
#include <string>
#include "hotel.hpp"


int foo(int a, int b) { //First
    int c = a+b;
    while(c>=3)
        c-=3;
    return c;
}
//------------------------------------
char foo(std::string a, int b) { //Second
    return a[b];
}
//------------------------------------
std::string foo(int b, std::string &a) { //Third
    std::string sub = a.substr(3*b,3);
    a.replace(3*b,3,"...");
    return sub;
}
//--------------------------------------
int main() {
    
}

