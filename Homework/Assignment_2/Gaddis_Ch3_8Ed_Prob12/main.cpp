/* 
    File:   main.cpp
    Author: David Duran
    Created on January 14, 2016, 09:22 PM
    Purpose: Celsius To Fahrenheit
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float fTemp,cTemp;//Fahrenheit and Celsius temperatures
    
    //Input data
    cout<<"Insert Temperature"<<endl;
    cin>>cTemp;
    
    //Calculate or map inputs to outputs
    fTemp=((cTemp*9)/5)+32;//Celsius to Fahrenheit Formula
    
    //Output the results
    cout<<"Temperature in Celsius= "<<cTemp<<"°c"<<endl;
    cout<<"Temperature in Fahrenheit= "<<fTemp<<"°f"<<endl;
    
    //Exit stage right
    return 0;
}
