//  main.cpp
//  Shayne_Gill_Homework_3
//
//  Created by Shayne Gill on 2/8/18.
//  Copyright © 2018 Shayne Gill. All rights reserved.

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

class reverseNumbers
{
 private:
 int number, reverse, originalNumber;
 public:
 void input();
 void calc();
 void display();
};
void reverseNumbers::input()
{
    cout << "Enter a number: ";
    cin >> number;
}
void reverseNumbers::calc()
{
    originalNumber = number;
    while(number!=0)
    {
        reverse=reverse*10;
        reverse=reverse+number%10;
        number=number/10;
    }
}
void reverseNumbers::display()
{
    cout << "Reverse of " << originalNumber << " is " << reverse << endl;
    
}


int main(int argc, const char * argv[]) {

    reverseNumbers r;
    r.input();
    r.calc();
    r.display();

    return 0;
}
