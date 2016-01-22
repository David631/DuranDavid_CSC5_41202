/* 
    File:   main.cpp
    Author: David Duran
    Created on January 21, 2016, 07:00 PM
    Purpose: Body Mass Index Calculator
 */

//System Libraries
#include <iostream> //I/O
#include <cmath>    //Math
#include <iomanip>  //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    cout<<endl<<"Gaddis 8thEd Chap4 Prob3"<<endl<<endl;
    cout<<endl<<"The Body Max Index Calculator"<<endl<<endl;
    
    //Declare and initialize variables
    float BMI;        //Body Max Index
    int weight,height;//Weight in pounds, Height in inches
    
    //Output Measurements
    cout<<"How much do you weigh in pounds?"<<endl;
    cin>>weight;
    cout<<"How tall are you in inches?"<<endl;
    cin>>height;
    
    //Calculate BMI
    BMI=(weight/pow(height,2))*703;//BMI Formula for USA
    
    //Output the results
    cout<<"Your weight is: "<<weight<<"(lbs)"<<endl;
    cout<<"Your height is: "<<height<<"(in)"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Your BMI is   : "<<BMI<<endl;
    
    //Output BMI optimal weight
    if(BMI<18.5){
    	cout<<"You are Underweight."<<endl;
    }else if(BMI>=18.5&&BMI<=25){
    	cout<<"You're at an Optimal Weight."<<endl;
    }else{
    	cout<<"You're Overweight"<<endl;
    }
    
    //Exit stage right
    return 0;
}