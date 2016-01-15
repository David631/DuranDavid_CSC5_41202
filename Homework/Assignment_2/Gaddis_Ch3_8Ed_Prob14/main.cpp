/* 
    File:   main.cpp
    Author: David Duran
    Created on January 14, 2016, 09:55 PM
    Purpose: Monthly Sales Tax
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float  totlAmt,prdSale;  //Total Amount and Product Sales
    float  stateTx=.04f;     //State Tax percentage
    float  contyTx=.02f;     //County Tax percentage
    float  sTax,cTax,totlTax;//State Tax, County Tax, and Total Tax
    string month;            //The month at which total amount is gained
    int    year;             //The year at which total amount is gained
    
    
    //Input data
    cout<<"Insert Month"<<endl;
    cin>>month;
    cout<<"Insert Year"<<endl;
    cin>>year;
    cout<<"Insert Total Amount Collected"<<endl;
    cin>>totlAmt;
    
    //Calculate or map inputs to outputs
    prdSale=totlAmt/1.06;//Formula to find product sales
    cTax=prdSale*contyTx;//Formula to find county tax
    sTax=prdSale*stateTx;//Formula to find state tax
    totlTax=cTax+sTax;   //Formula to find total tax
    
    //Output the results
    cout<<endl<<setprecision(2)<<fixed;
    cout<<"Month: "<<month<<endl;
    cout<<"Year: " <<year<<endl;
    cout<<"Total Collected:  $" <<setw(10)<<totlAmt<<endl;
    cout<<"Sales:            $" <<setw(10)<<prdSale<<endl;
    cout<<"County Sales Tax: $" <<setw(10)<<cTax<<endl;
    cout<<"State Sales Tax:  $" <<setw(10)<<sTax<<endl;
    cout<<"Total Sales Tax:  $" <<setw(10)<<totlTax<<endl;
    
    //Exit stage right
    return 0;
}
