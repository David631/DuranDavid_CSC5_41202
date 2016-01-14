/* 
    File:   main.cpp
    Author: David Duran
    Created on January 13, 2016, 10:45 AM
    Purpose: Calculate the Square Root by the Babylonian/Newton's Method
 * Version 2: Uses Loop to end calculation
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
    float n;         //Input the Value to obtain it's square root
    float r,guess;   //Intermediate values which asymptotically approach sqrt(n)
    float tol=0.001f;//Accuracy of the results/tolerance
    int   counter=0; //See how many loops it took to get the answer
    
    //Input data
    cout<<"Input the value to compute the sqrt of?"<<endl;
    cin>>n;
    
    //Approximate the square root
    guess=n/2;//Only perform once to start the process
    
    //Output the initial values
    cout<<"The input value      = "<<n<<endl;
    cout<<"sqrt("<<n<<")="<<sqrt(n)<<endl;
    
    //Approximate the square root
    do{
        r=n/guess;
        guess=(guess+r)/2;
        counter++;
    }while(abs((r-guess)/guess)*100>tol);//End the loop when close enough
    
    //Output the results
    cout<<"The r     = "      <<r<<endl;
    cout<<"The guess = "      <<guess<<endl;
    cout<<"The loop executed "<<counter<<endl;
    
    
    //Exit stage right
    return 0;
}

