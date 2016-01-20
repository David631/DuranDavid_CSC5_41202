/* 
    File:   main.cpp
    Author: David Duran
    Created on January 20, 2016, 07:53 AM
    Purpose: Magic Dates
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
    int month,day,year;//Month, Day, Year
    int magic;         //Month*Day
    
    //Input data
    cout<<"Insert Month in numeric form"<<endl;
    cin>>month;
    cout<<"Insert Day"<<endl;
    cin>>day;
    cout<<"Insert a two-digit year"<<endl;
    cin>>year;
    
    //Calculate or map inputs to outputs
    magic=month*day;
    
    if(magic==year){
        cout<<"This Date is Magic!"<<endl;
    }else{
        cout<<"This Date is not Magic!"<<endl;
    }
    
    //Output the results
    
    //Exit stage right
    return 0;
}

