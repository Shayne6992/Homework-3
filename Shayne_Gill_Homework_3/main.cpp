//  main.cpp
//  Shayne_Gill_Homework_3
//
//  Created by Shayne Gill on 2/8/18.
//  Copyright © 2018 Shayne Gill. All rights reserved.

#include <iostream>
#include "ReverseNumbers.hpp"

using namespace std;


int main(int argc, const char * argv[]) {

    bool done = false;
    do {
        reverseNumbers r;
        r.input();
        r.calc();
        r.display();
        if (r.rerun(0,1) == 0) { done = true; } // Closes program if requested by user.
    } while (!done);
    return 0;
}
