/*This is a C++ Project for creating various mathematical Functions.
 * Project: Mathematical Functions
 * File: main.cpp
 *
 * Author: Nilabja Das
 * Date: 28.05.2020*/

#include<iostream>
//#include<cmath>

#include"Function_Declaration_Header.h"


using namespace std;

int main()
{
    void Introduction();
    void Function_Options_List();

    Introduction();
    Function_Options_List();

    int option_choice;
    cout<<"\n\nEnter your Choice: ";
    cin>>option_choice;
    cin.get();

    switch(option_choice)
    {
        case 1:
            addition();
            break;

        case 2:
            subtraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            division();
            break;

        case 5:
            remainder();
            break;

        case 6:
            factorial();
            break;

        case 7:
            Special_Number_Functions();
            break;

        case 8:
            Scientific_Notation();
            break;

        case 9:
            hcf_and_lcm();

        default:
            cout<<"\nError!";
    }
    return 0;
}

void Introduction()
{
    cout<<"\nWelcome! This is a Program which can be used to perform several mathematical functions.";
    cout<<"\nHere, you will get a lot of common and uncommon mathematical functions. So, let's get Started!";
}

void Function_Options_List()
{
    cout << "\nThe following are the several functions currently available: ";
    cout << "\n\t1. Addition";
    cout << "\n\t2. Subtraction";
    cout << "\n\t3. Multiplication";
    cout << "\n\t4. Division";
    cout << "\n\t5. Remainder of a division";
    cout << "\n\t6. Factorial of an Integer";
    cout << "\n\t7. Special Number Functions";
    cout<<"\n\t8. Convert to Scientific Notation";
    cout<<"\n\t9. HCF of two Integers";
}