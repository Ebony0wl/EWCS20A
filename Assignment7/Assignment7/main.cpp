//
//  main.cpp
//  Assignment7
//
//  Created by Ebony Warren on 12/13/18.
//  Copyright © 2018 CS20A. All rights reserved.
//

#include <iostream>
using namespace std;

#define ARRAY_SIZE 100;

struct BadMovie {
    int databaseID;
    string name;
    string director;
    int runtimeInSeconds;
    int rating;
};

int hash2(const BadMovie &bm) {
    
    int sum;
    
    sum = bm.databaseID + bm.runtimeInSeconds + bm.rating;
    long num = bm.name.length();
    long num2 = bm.director.length();
    
    for (int i=1; i < num; i++){
        sum += bm.name[i-1]*10*i;
    }
    
    for (int i=1; i < num2; i++){
        sum += bm.director[i-1]*10*i;
    }

    int bucket = sum % ARRAY_SIZE;
    return bucket;
}


int main() {
    BadMovie bm;
    bm.databaseID=1232;
    bm.name="hi";
    bm.director="bob";
    bm.runtimeInSeconds = 3;
    bm.rating=8;
    
    cout << hash2(bm);
    
    
}
