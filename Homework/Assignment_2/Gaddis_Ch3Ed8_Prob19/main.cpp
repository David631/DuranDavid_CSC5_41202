/* 
 * File:   main.cpp
 * Author: David Duran
 * Created on January 13, 2016, 09:09 AM
 * Purpose: Interest Rate
 */

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

unsigned short CNVPRC=12*100;//Converting Months into Years

/*
 * 
 */
int main(int argc, char** argv) {

    unsigned short loan;   //Amount of Loan taken out
    unsigned short nPaymnt;//Number of Payments
    unsigned short intRate;//Monthly Interest Rate
    float payment;         //Monthly Payment
    float intrest;         //Amount of Interest need to pay back
    float paidBck;         //Total need to pay back with interest 
    
    cout<<"Insert Loan"              <<endl;//Insert amount of loan desired
    cin>>loan;
    cout<<"Insert Interest Rate"     <<endl;//Insert banks interest rate
    cin>>intRate;
    cout<<"Insert Number of Payments"<<endl;//Insert Number of payments
    cin>>nPaymnt;
    
    float temp=static_cast<float>(pow(1+static_cast<float>(intRate)/
    CNVPRC,nPaymnt));
    payment=temp*intRate/CNVPRC*loan/(temp-1);
    intrest=nPaymnt*payment-loan;
    paidBck=intrest+loan;
    
    cout<<endl<<"Your Loan= $"  <<loan<<endl;
    cout<<"Number of Payments= "<<nPaymnt<<endl;
    cout<<"Interest Rate= "     <<intRate<<'%'<<endl;
    cout<<"Payment Total= $"    <<payment<<endl;
    cout<<"Interest Paid= $"    <<intrest<<endl;
    cout<<"Amount Paid Back= $" <<paidBck<<endl;
    
    return 0;
}