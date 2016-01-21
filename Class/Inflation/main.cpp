/* 
    File:   main.cpp
    Author: David Duran
    Created on January 21, 2016, 11:07 AM
    Purpose: Inflation
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
    cout<<endl<<"Fun look at Inflation"<<endl;
    
    //Declare and initialize variables
    float price=0.25f;      //Initial Balance $'s
    float inflate=0.07f;       //Interest Rate/year
    float rule72=0.72f/inflate;//Rule of 72, Future Value= 2 * Present Val
    float infYear;             //Interest Earned
    //Output the Table Heading
    cout<<endl<<"The inflation Rate = "<<inflate*100<<"%"<<endl;
    cout<<"At this inflation rate should double every ";
    cout<<rule72<<" Years"<<endl;
    cout<<"Year Year  Price Inflation"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    
    //Calculate the Savings
   
    int y=0,year=2016;
    do{
        infYear=price*inflate;
        cout<<setw(4)<<y<<" "<<year<<setw(7)<<price
                <<setw(10)<<infYear<<endl;
        price*=(1+inflate);
        y++,year++;
    }while(y<=50);
    
    //Exit stage right
    return 0;
}