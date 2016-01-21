/* 
    File:   main.cpp
    Author: David Duran
    Created on January 21, 2016, 11:07 AM
    Purpose: Savings Using Do while
*/

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formating
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Problem to solve
    cout<<endl<<"Fun look at Savings and rule of 72"<<endl;
    cout<<endl<<"http://california.municipalbonds.com/bonds/recent/"<<endl;
    
    //Declare and initialize variables
    float balance=100.0f;      //Initial Balance $'s
    float intRate=0.05f;       //Interest Rate/year
    float rule72=0.72f/intRate;//Rule of 72, Future Value= 2 * Present Val
    float intErnd;             //Interest Earned
    //Output the Table Heading
    cout<<endl<<"The Interest Rate = "<<intRate*100<<"%"<<endl;
    cout<<"At this Interest Principle should double every ";
    cout<<rule72<<" Years"<<endl;
    cout<<"Year Year Balance Interest"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Calculate the Savings
   
    int y=0,year=2016;
    do{
        intErnd=balance*intRate;
        cout<<setw(4)<<y<<" "<<year<<setw(8)<<balance
                <<setw(9)<<intErnd<<endl;
        balance*=(1+intRate);
        y++,year++;
    }while(y<=50);
    
    //Exit stage right
    return 0;
}