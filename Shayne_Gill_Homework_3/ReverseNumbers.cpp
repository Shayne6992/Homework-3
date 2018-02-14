//
//  ReverseNumbers.cpp
//  Shayne_Gill_Homework_3
//
//  Created by Shayne Gill on 2/8/18.
//  Copyright © 2018 Shayne Gill. All rights reserved.
//

#include "ReverseNumbers.hpp"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int reverseNumbers::input()
{
    const int negative = -999999999;
    const int positive = 999999999;
    cout << "Enter a number that is no less than " << negative << " and no greater than " << positive << ": ";
    cin >> number;
    while (cin.fail() || number < negative || number > positive) {
        cout << "Invalid input. Please try again. Remember, your number can be no less than -32767 or no greater than 32767. " << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Enter a number: ";
        cin >> number;
    }
    return number;
}
int reverseNumbers::userInput()
{
    int originalNumber2 = number;
    return originalNumber2;
    
}
void reverseNumbers::calc()
{
    reverse = 0;
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
int reverseNumbers::rerun(int minValue, int maxValue)
{
    int response = 0;
    cout << endl;
    cout << "Would you like to run the test again? (1=Yes/0=No): ";
    cin >> response;
    while (cin.fail() || (response < minValue || response > maxValue))
    {
        cout << "Invalid input. Please try again." << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Would you like to run the test again? (1=Yes/0=No): ";
        cin >> response;
    }
    return response;
}
