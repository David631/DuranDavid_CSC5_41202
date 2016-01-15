/* 
    File:   main.cpp
    Author: David Duran
    Created on January 14, 2016, 07:20 AM
    Purpose: How Many Calories?
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int cookies;
    int cookBag;
    int serving;
    int calorie;
    int calCons;
    
    //Input data
    cout<<"How many Cookies did you eat?"<<endl;
    cin>>cookies;
    cout<<"Cookies ate= "<<cookies<<endl;
    
    //Calculate or map inputs to outputs
    cookBag=30;
    calorie=30;
    if (cookies>30){
    	calCons=calorie*cookies*cookBag;
    }
    else if(cookies<=30){
    	calCons=calorie*cookies;
    }
    
    //Output the results
    cout<<"Total Calories Consumed= "<<calCons<<endl;
    
    
    //Exit stage right
    return 0;
}



