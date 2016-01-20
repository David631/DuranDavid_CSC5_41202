/* 
    File:   main.cpp
    Author: David Duran
    Created on January 19, 2016, 11:44 AM
    Purpose: Finding the finite sum for Pie
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Problem to Solve
    cout<<endl<<"Savitch 8thEd Chap3 Prob12"<<endl<<endl;
    cout<<endl<<"The finite sum for PI"<<endl<<endl;
    
    //Declare and initialize variables
    unsigned int nTerms;
    float apprxPI=1;
    char sign=-1;
    
    //Input the Value x
    cout<<"Input number of Terms to Approximate PI"<<endl;
    cin>>nTerms;
    
    //calculate e^x
    for(int i=2,j=3;i<=nTerms;i++,j+=2){
        apprxPI+=(sign/static_cast<float>(j));
        sign*=-1;
    }
    apprxPI*=4;
    
    //Output the results
    cout<<"The exact  value of PI="<<PI<<endl;
    cout<<"The number of terms it took to approx PI="<<nTerms<<endl;
    cout<<"The approx value of PI="<<apprxPI<<endl<<endl;
    
    
    //Exit stage right
    return 0;
}

