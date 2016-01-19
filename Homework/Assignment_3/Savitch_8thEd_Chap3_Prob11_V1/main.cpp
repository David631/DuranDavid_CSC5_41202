/* 
    File:   main.cpp
    Author: David Duran
    Created on January 19, 2016, 10:38 AM
    Purpose: Setup for Home LDE
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
    unsigned int n,factN=1;//N and N!
    
    //Input data
    cout<<"Enter the Number you would like to compute the factorial n!"<<endl;
    cout<<"The limit of this calculation if <=13"<<endl;
    cin>>n;
    
    //Calculate the factorial
    for(int i=1;i<=n;i++){
        factN*=i;
    }
    
    //Output the results
    cout<<n<<"!="<<factN<<endl;
    
    
    //Exit stage right
    return 0;
}

