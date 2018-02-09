//  main.cpp
//  Shayne_Gill_Homework_3
//
//  Created by Shayne Gill on 2/8/18.
//  Copyright © 2018 Shayne Gill. All rights reserved.

#include <iostream>
#include "ReverseNumbers.hpp"
#include <vector>

using namespace std;

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
    int num = 6251;
    int arr[4] = {0};
    
    splitIntegerIntoArray(arr, 4, num);
    cout << "The original number is: " << num << endl;
    cout << "The array is: ";
    printArray(arr, 4);

    
    
    
//    char array[6];
//    cout << "Enter Array:";
//    cin >> array;
//    cout << endl;
    
    

//    reverse(digits.begin(), digits.end());
//    // Bubble Sort Starts Here
//    int temp; // stores the number temporarily until sorted.
//    for(int i2=0; i2<=5; i2++) // Bubble sorts the array from smallest to largest.
//    {
//        for(int j=0; j<5; j++)
//        {
//            //Swapping element in if statement
//            if(array[j]>array[j+1]) // By changing > to < it sorts it from largest to smallest.
//            {
//                temp=array[j];
//                array[j]=array[j+1];
//                array[j+1]=temp;
//            }
//        }
//    }
//    // Displaying Sorted array
//    cout<< "Sorted Array is: "<<endl; // // displays the array after being sorted.
//    for(int i3=0; i3<5; i3++)
//    {
//        cout << array[i3];
//    }
//    cout << endl;
    return 0;
}
