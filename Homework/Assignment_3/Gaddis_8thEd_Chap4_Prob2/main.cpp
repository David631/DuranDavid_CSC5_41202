/* 
    File:   main.cpp
    Author: David Duran
    Created on January 20, 2016, 09:52 AM
    Purpose: Roman Numeral Converter
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned int number;//Number between 1-10
    
    //Input data
    cout<<"Insert a number between 1-10"<<endl;
    cin>>number;
    
    switch(number){
        case 1:cout<<"I"<<endl;//1 in Roman Numeral
                break;
        case 2:cout<<"II"<<endl;//2 in Roman Numeral
                break;
        case 3:cout<<"III"<<endl;//3 in Roman Numeral
                break;
        case 4:cout<<"IV"<<endl;//4 in Roman Numeral
                break;
        case 5:cout<<"V"<<endl;//5 in Roman Numeral
                break;
        case 6:cout<<"VI"<<endl;//6 in Roman Numeral
                break;
        case 7:cout<<"VII"<<endl;//7 in Roman Numeral
                break;
        case 8:cout<<"VIII"<<endl;//8 in Roman Numeral
                break;
        case 9:cout<<"IX"<<endl;//9 in Roman Numeral
                break;
        case 10:cout<<"X"<<endl;//10 in Roman Numeral
                break;
        default: cout<<"Number Invalid"<<endl;//Invalid if 1-10 is not selected
    }

    //Exit stage right
    return 0;
}

