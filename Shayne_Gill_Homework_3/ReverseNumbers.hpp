//
//  ReverseNumbers.hpp
//  Shayne_Gill_Homework_3
//
//  Created by Shayne Gill on 2/8/18.
//  Copyright © 2018 Shayne Gill. All rights reserved.
//

#ifndef ReverseNumbers_hpp
#define ReverseNumbers_hpp

#include <stdio.h>
#include <string>

using namespace std;

class reverseNumbers
{
    long long number =0, reverse=0, originalNumber=0, originalNumber2=0, response=-1; // By default private.
    public:
    void input();
    long long userInput();
    int powerFunction();
    long long intToArray;
    int power();
    void calc();
    void display();
    void ascending();
    void descending();
    int rerun(int minValue, int maxValue);
};

#endif /* ReverseNumbers_hpp */
