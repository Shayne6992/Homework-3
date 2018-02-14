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
    int number =0, reverse=0, originalNumber=0, originalNumber2=0, response=-1, counter = -1; // By default private.
    public:
    int input();
    int userInput();
    int powerFunction();
    int power();
    void calc();
    void display();
    void ascending();
    void descending();
    int rerun(int minValue, int maxValue);
};

#endif /* ReverseNumbers_hpp */
