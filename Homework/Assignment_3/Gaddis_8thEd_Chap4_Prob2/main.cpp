/* 
    File:   main.cpp
    Author: David Duran
    Created on January 20, 2016, 09:52 AM
    Purpose: Roman Numeral Converter
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int number;//Number between 1-10
    
    //Input data
    cout<<"Insert a number between 1-10"<<endl;
    cin>>number;
    
    switch(number){
        case 1:cout<<"I"<<endl;
                break;
        case 2:cout<<"II"<<endl;
                break;
        case 3:cout<<"III"<<endl;
                break;
        case 4:cout<<"IV"<<endl;
                break;
        case 5:cout<<"V"<<endl;
                break;
        case 6:cout<<"VI"<<endl;
                break;
        case 7:cout<<"VII"<<endl;
                break;
        case 8:cout<<"VIII"<<endl;
                break;
        case 9:cout<<"IX"<<endl;
                break;
        case 10:cout<<"X"<<endl;
                break;
        default: cout<<"Number Invalid"<<endl;
    }

    //Exit stage right
    return 0;
}

