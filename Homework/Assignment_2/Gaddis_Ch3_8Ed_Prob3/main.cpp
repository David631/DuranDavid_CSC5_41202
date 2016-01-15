/* 
    File:   main.cpp
    Author: David Duran
    Created on January 14, 2016, 09:05 PM
    Purpose: Test Average
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
    int tstScr1,tstScr2,tstScr3,tstScr4,tstScr5;
    float avrge;
    
    //Input data
    cout<<"Test Score One: "<<endl;
    cin>>tstScr1;
    cout<<"Test Score Two: "<<endl;
    cin>>tstScr2;
    cout<<"Test Score Three: "<<endl;
    cin>>tstScr3;
    cout<<"Test Score Four: "<<endl;
    cin>>tstScr4;
    cout<<"Test Score Five: "<<endl;
    cin>>tstScr5;
    
    //Calculate or map inputs to outputs
    avrge=(tstScr1+tstScr2+tstScr3+tstScr4+tstScr5)/5.0;
    
    
    //Output the results
    cout<<setprecision(1)<<fixed;
    cout<<endl<<"Test Score One: "<<tstScr1<<endl;
    cout<<"Test Score Two: "<<tstScr2<<endl;
    cout<<"Test Score Three: "<<tstScr3<<endl;
    cout<<"Test Score Four: "<<tstScr4<<endl;
    cout<<"Test Score Five: "<<tstScr5<<endl;
    cout<<"The Average Score is: "<<avrge<<endl;
    
    
    
    //Exit stage right
    return 0;
}

