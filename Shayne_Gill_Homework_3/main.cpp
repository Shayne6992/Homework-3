//  main.cpp
//  Shayne_Gill_Homework_3
//
//  Created by Shayne Gill on 2/8/18.
//  Copyright © 2018 Shayne Gill. All rights reserved.

#include <iostream>
#include "ReverseNumbers.hpp"
#include <vector>
#include <string.h>

using namespace std;

vector<int> digits;

// number ^ index: power function for integers
int power (int number, int index) {
    if (index == 0) {
        return 1;
    }
    int num = number;
    for (int i = 1; i < index; i++) {
        number = number * num;
    }
    return number;
}

// place an integer in an array digit-by-digit
void splitIntegerIntoArray(long long arr[], int size, long long number) {
    long long tempNumber = number;
    for (int i = 1; i <= size; i++) {
        int index = size - i;
        long long digit = tempNumber / power(10, index);
        arr[i-1] = digit;
        tempNumber = tempNumber - power(10, index) * digit;
    }
}

// output contents of array to screen
void printArray(long long arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    
        reverseNumbers r;
        long long array[5];

    do {

        
        r.input();
        splitIntegerIntoArray(array, 5, r.userInput());
        cout << "The original number is: " << r.userInput() << endl;
        cout << "The array is: ";
        printArray(array, 5);
        r.calc();
        r.display();
        
        reverse(digits.begin(), digits.end());
        // Bubble Sort Starts Here
        long long temp; // stores the number temporarily until sorted.
        for(int i2=0; i2<=5; i2++) // Bubble sorts the array from smallest to largest.
        {
            for(int j=0; j<5; j++)
            {
                //Swapping element in if statement
                if(array[j]>array[j+1]) // By changing > to < it sorts it from largest to smallest.
                {
                    temp=array[j];
                    array[j]=array[j+1];
                    array[j+1]=temp;
                }
            }
        }
        // Displaying Sorted array
        cout<< "Sorted Array is: "<<endl; // // displays the array after being sorted.
        for(int i3=0; i3<5; i3++)
        {
            cout << array[i3];
        }
        cout << endl;

    } while (r.rerun(0,1)!=0);
    

    
    

    

    
    
    
//    char array[6];
//    cout << "Enter Array:";
//    cin >> array;
//    cout << endl;
    
    

    return 0;
}
