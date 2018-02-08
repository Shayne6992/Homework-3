//
//  Descending.cpp
//  Shayne_Gill_Homework_3
//
//  Created by Shayne Gill on 2/8/18.
//  Copyright © 2018 Shayne Gill. All rights reserved.
//

#include "Descending.hpp"
using namespace std;

char array[6];
cout << "Enter Array:";
cin >> array;
cout << endl;



// Bubble Sort Starts Here
int temp; // stores the number temporarily until sorted.
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
