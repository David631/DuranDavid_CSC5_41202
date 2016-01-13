/* 
    File:   main.cpp
    Author: Jingnan Chen
    Created on January 13, 2016, 11:30 AM
    Purpose: Net income and tax
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float income;
    float tax1;
    float tax2;
    float tax3;
    float tax4;
    float tax5;
    float tax6;
    float tax7;
    float tax8;
    float ntncome;
    
    cout<<"Insert Income"<<endl;
    cin>>income;
    
    if (income=5000){
    tax1=0;
    ntncome=income-tax1;
    cout<<"The tax is "<<tax1<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    }
    
    else if (income=10000){
    tax2=5000*0.1;
    ntncome=income-tax2-tax1;
    cout<<"The tax is "<<tax2<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    }
    
    income=15000;
    tax3=5000*0.15;
    ntncome=income-tax3-tax2;
    cout<<"The tax is "<<tax3<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    
    income=20000;
    tax4=5000*0.2;
    ntncome=income-tax4-tax3-tax2;
    cout<<"The tax is "<<tax4<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    
    income=25000;
    tax5=5000*0.25;
    ntncome=income-tax5-tax4-tax3-tax2;
    cout<<"The tax is "<<tax5<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    
    income=30000;
    tax6=5000*0.3;
    ntncome=income-tax6-tax5-tax4-tax3-tax2;
    cout<<"The tax is "<<tax6<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    
    income=35000;
    tax7=5000*0.35;
    ntncome=income-tax7-tax6-tax5-tax4-tax3-tax2;
    cout<<"The tax is "<<tax7<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    
    income=40000;
    tax8=5000*0.4;
    ntncome=income-tax8-tax7-tax6-tax5-tax4-tax3-tax2;
    cout<<"The tax is "<<tax8<<endl;
    cout<<"The net income is "<<ntncome<<endl;
    
    
    
    
    return 0;
}
