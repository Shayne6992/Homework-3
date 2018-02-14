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
int power (int powerFunction, int index) {
    if (index == 0) {
        return 1;
    }
    int num = powerFunction;
    for (int i = 1; i < index; i++) {
        powerFunction = powerFunction * num;
    }
    return powerFunction;
}

int intCounter(int number)
{
    int counter = 0;
    
    for (; number != 0; ++counter)
    {
        cin >> number;
    }
    return counter;
}

// place an integer in an array digit-by-digit
void splitIntegerIntoArray(int arr[], int size, int number) {
    int tempNumber = number;
    for (int i = 1; i <= size; i++) {
        int index = size - i;
        int digit = tempNumber / power(10, index);
        arr[i-1] = digit;
        tempNumber = tempNumber - power(10, index) * digit;
    }
}

// output contents of array to screen
void printArray(int arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        cout << arr[i] << ' ';
    }
    cout << endl;
}


int main(int argc, const char * argv[]) {
    
        reverseNumbers r;
        int array[10];
        
    do {
        
        
        int userInput = r.input();
        splitIntegerIntoArray(array, 10, r.userInput());
        cout << "The original number is: " << r.userInput() << endl;
        cout << "The array is: ";
        printArray(array, 10);
        r.calc();
        r.display();

        
        reverse(digits.begin(), digits.end());
        // Bubble Sort Starts Here
        int temp =0; // stores the number temporarily until sorted.
        for(int i2=0; i2<10; i2++) // Bubble sorts the array from smallest to largest.
        {
            for(int j=0; j<9; j++)
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
        for(int i3=4; i3<10; i3++)
        {
            if (array[i3 ==0]) {
                array[i3++] = '\0';
            }
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
