/* 
    File:   main.cpp
    Author: David Duran
    Created on January 19, 2016, 10:38 AM
    Purpose: Calculate e^x
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
    //Problem to Solve
    cout<<endl<<"Savitch 8thEd Chap3 Prob10"<<endl<<endl;
    cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;
    //Declare and initialize variables
    float etox=1,x;//E^x
    const unsigned char nTerms=13;
    //Input the Value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //calculate e^x
    for(int n=1;n<=nTerms;n++){
        //Declare and Initialize Variables
        unsigned int factN=1;//N and N!

        //Calculate the factorial
        for(int i=1;i<=n;i++){
            factN*=i;
        }
        
        //Calculate e^x with the above factorial
        etox+=pow(x,n)/factN;
    }
    
    //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
    
    
    //Exit stage right
    return 0;
}

