//
//  main.cpp
//  mc714-2s2016-t01
//
//  Created by João Victor Chencci Marques on 06/09/16.
//  Copyright © 2016 João Victor Chencci Marques. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <random>

using namespace std;

int avg(vector<int> &input, int listSize);
int rdm();

int main(int argc, const char * argv[]) {
    
    int listSize = 0;
    cin >> listSize;
    
    vector<int> input;
    int current;
    
    for (int i=0; i<listSize; i++) {
        current = rdm();
        input.push_back(current);
    }
    
    int res = avg(input, listSize);
    cout << res;
    
    return 0;
}

int avg(vector<int> &input, int listSize) {
    
    int sum = 0;
    for (int i=0; i<listSize; i++) {
        sum += input.at(i);
    }
    
    return (sum/listSize);
}

int rdm() {
    
    random_device rd;     // only used once to initialise (seed) engine
    mt19937 rng(rd());    // random-number engine used (Mersenne-Twister in this case)
    uniform_int_distribution<int> uni(0,1000); // guaranteed unbiased
    
    auto random_integer = uni(rng);
    
    return random_integer;
}