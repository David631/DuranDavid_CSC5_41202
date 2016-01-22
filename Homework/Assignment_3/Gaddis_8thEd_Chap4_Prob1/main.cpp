/* 
    File:   main.cpp
    Author: David Duran
    Created on January 21, 2016, 09:30 PM
    Purpose: Minimum/Maximum
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Problem to Solve
    cout<<endl<<"Gaddis 8thEd Chap4 Prob1"<<endl<<endl;
    cout<<endl<<"The Minimum/Maximum problem"<<endl<<endl;
    
    //Declare and initialize variables
    signed short numbr1,numbr2;//Number one Number two
    signed short A,B;
    char great; //Determines if number one is greater of less than number two
    
    //Input data
    cout<<"Type a Random Number"<<endl;
    cin>>numbr1;
    cout<<"Type a Second Random Number"<<endl;
    cin>>numbr2;
    
    //Output the results
    great=(numbr1==numbr2?'=':(numbr1>numbr2?'>':'<'));
    cout<<"The Number "<<numbr1<<" is "<<great<<" than "<<numbr2<<endl<<endl;
    
    //Exit stage right
    return 0;
}

