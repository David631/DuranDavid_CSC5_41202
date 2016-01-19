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
    const unsigned char nTerms=13;
    float tol=1e-3f,term=1,etox=1,x;//E^x
    float nTerm=1;//Counter to determine how many terms
    //Input the Value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;
    
    //Calculate e^x
    do{
        term*=x/nTerm++;
        etox+=term;
    }while(term>tol);
    
    //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The number of terms it took to approx e^"<<x<<"="<<nTerm<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
    
    
    //Exit stage right
    return 0;
}

