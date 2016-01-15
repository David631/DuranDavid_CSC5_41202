/* 
    File:   main.cpp
    Author: David Duran
    Created on January 14, 2016, 08:30 PM
    Purpose: Male and Female Percentage
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
    float males;
    float females;
    float nStdent;
    float prcent1,prcent2;
    
    //Input data
    cout<<"How many Males are in the class?"<<endl;
    cin>>males;
    cout<<"How many Females are in the class?"<<endl;
    cin>>females;
    
    //Calculate or map inputs to outputs
    nStdent=males+females;
    prcent1=males/nStdent;
    prcent2=females/nStdent;
    
    //Output the results
    cout<<endl<<"Total Number of Students in the Class= "<<nStdent<<endl;
    cout<<setprecision(2)<<fixed;
    cout<<"Percentage of Males Students in the Class= "  <<prcent1<<"%"<<endl;
    cout<<"Percentage of Females Students in the Class= "<<prcent2<<"%"<<endl;
    
    
    //Exit stage right
    return 0;
}



