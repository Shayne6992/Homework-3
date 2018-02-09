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

using namespace std;

vector <long long> integerToArray(long long x)
{
    vector <long long> resultArray;
    while (true)
    {
        resultArray.insert(resultArray.begin(), x%10);
        x /= 10;
        if(x == 0)
            return resultArray;
    }
}

void reverseNumbers::input()
{
    cout << "Enter a number that is no less than -32767 and no greater than 32767: ";
    cin >> number;
    while (cin.fail() || number < -32767 || number > 32767) {
        cout << "Invalid input. Please try again. Remember, your number can be no less than -32767 or no greater than 32767. " << endl;
        cin.clear();
        cin.ignore(100, '\n');
        cout << "Enter a number: ";
        cin >> number;
    }
}
int reverseNumbers::power()
void reverseNumbers::splitIntegerIntoArray();
void reverseNumbers::printArray();

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
