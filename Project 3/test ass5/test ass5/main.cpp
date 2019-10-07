//
//  main.cpp
//  test ass5
//
//  Created by Ebony Warren on 11/14/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include <iostream>
int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 1) return 1;
    return (fibonacci(n - 1) + fibonacci(n - 2));
}


int main() {
    std::cout << fibonacci(12);
}
