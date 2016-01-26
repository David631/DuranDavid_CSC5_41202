/* 
    File:   main.cpp
    Author: David Duran
    Created on January 26, 2016, 08:44 AM
    Purpose: Variations on a Savings Theme
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
#include <cmath>   //Power/Exponential/Log Functions
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
const char PERCENT=100;//Convert (Decimal to Percentage)

//Function Prototypes
float save1(float,float,int);      //Power
float save2(float,float,int);      //Exponential Log
float save3(float,float,int);      //For-Loops
float save4(float,float,int);      //For-Loops Banking Implementation
float save5(float,float,int);      //Recursion 
float save6(float,int,float=0.05f);//Defaulted save Function
float save7(float,float,int);      //For-Loops and static variable

// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    float pv=rand()%9001+1000;//[1000,10000]
    float intRate=rand()%11+5;//[5,15]
    char  nComp=rand()%16;//[0,15]
    
    //Output the random inputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value  = $"<<pv<<endl;
    cout<<"The interest rate  =  "<<intRate<<"%"<<endl;
    cout<<"The number of year =  "<<static_cast<int>(nComp)<<endl;
    
    //Output the results
    cout<<"The Savings using Power Function                  = $"
        <<save1(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using Exponential and Log Function    = $"
        <<save2(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For Loops                       = $"
        <<save3(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For Loops Banking Version       = $"
        <<save4(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using Recursion                       = $"
        <<save5(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using Exponential Defaulting Interest = $"
        <<save6(pv,nComp,intRate/PERCENT)<<endl;
    cout<<"The Savings using Exponential Defaulting Interest 5%= $"
        <<save6(pv,nComp)<<endl;
    cout<<"The Savings using For-Loops and Static Variable   = $"
        <<save7(pv,intRate/PERCENT,nComp)<<endl;
    cout<<"The Savings using For-Loops and Static Variable   = $"
        <<save7(pv,intRate/PERCENT,nComp)<<endl;
    //Exit stage right
    return 0;
}

/******************************************************************************/
/*                                   SAVE1                                    */
/******************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Note: Using the power Function
float save1(float p,float i,int n){
    return p*pow((1+i),n);
}

/******************************************************************************/
/*                                   SAVE2                                    */
/******************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Note: Using the exponential and log Function
float save2(float p,float i,int n){
    return p*exp(n*log(1+i));
}

/******************************************************************************/
/*                                   SAVE3                                    */
/******************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Note: Using the For-Loop Function
float save3(float p,float i,int n){
    for(int years=1;years<=n;years++){
        p*=(1+i);
    }
    return p;
}

/******************************************************************************/
/*                                   SAVE4                                    */
/******************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Note: Using the loop function Banking Implementation
float save4(float p,float i,int n){
    int ip=p*PERCENT;//Place the value in pennies
    for(int years=1;years<=n;years++){
        ip*=(1+i);
    }
    p=static_cast<float>(ip)/PERCENT;
    return p;
}

/******************************************************************************/
/*                                   SAVE5                                    */
/******************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Note: Recursions 
float save5(float p,float i,int n){
    if(n==0)return p;
    return save5(p,i,n-1)*(1+i);
}

/******************************************************************************/
/*                                   SAVE6                                    */
/******************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Note: Using the power Function and defaulting the interest
float save6(float p,int n,float i){
    return p*pow((1+i),n);
}

/******************************************************************************/
/*                                   SAVE7                                    */
/******************************************************************************/
//Inputs
//p->Present Value $'s
//i->Interest Rate %
//n->Number of compounding periods
//Output
//fv->Future Value $'s
//Note: Using the For-Loop Function static variable
float save7(float p,float i,int n){
    static int nCalls=0;
    for(int years=1;years<=n;years++){
        p*=(1+i);
    }
    nCalls++;
    cout<<"This Function Save 7 Contains a Static Counter = "
            <<nCalls<<endl;
    return p;
}