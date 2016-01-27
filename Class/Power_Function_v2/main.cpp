/* 
    File:   main.cpp
    Author: David Duran
    Created on January 25, 2016, 08:35 AM
    Purpose: Power Function Example
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int pow(int&,int&);

// Execution Begins Here
int main(int argc, char** argv) {
    //Variables to be used in time
    int begI,endI,begD,endD,loop=100000000;//Beginning and Ending of the integer vs. double function
    
    //Declare and initialize variables
    int x;//Base of the problem
    int y;//Exponent of the problem
    int z;//The Result of a^b
    
    //Input data
    cout<<"Input a and b i.e. for a^b."<<endl;
    cin>>x>>y;
    
    //Calculate or map inputs to outputs
    begI=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)z=pow(x,y);
    endI=static_cast<unsigned int>(time(0));
    
    //Output the results
    cout<<"The functions are called "<<loop<<" times"<<endl;
    cout<<"Power Function Result: "<<x<<"^"<<y<<" = "<<z<<endl;
    cout<<"The total time take = "<<endI-begI<<"(secs)"<<endl;
    
    //Compare our function with the cmath library
    double dx=x;//Copy into a double
    double dy=y;//Copy into a double
    double dz;
    
    //Call math library function
    begI=static_cast<unsigned int>(time(0));
    for(int i=0;i<=loop;i++)dz=pow(dx,dy);
    endI=static_cast<unsigned int>(time(0));
    
    //Output the Results
    cout<<"Library Function Result: "<<dx<<"^"<<dy<<" = "<<dz<<endl;
    cout<<"The total time take = "<<endD-begD<<"(secs)"<<endl;
    cout<<"Same as z=exp(y*loge(x))-->"<<exp(dy*log(dx))<<endl;
    
    //Exit stage right
    return 0;
}
//000000001111111112222222222333333333444444444455555555566666666667777777777888
//345678901234567890123456789012345789012345678901234568901234567890123456789012
/*                         Power Function                                     */
/******************************************************************************/
//Inputs
//a->Integer Base
//b->Integer Power-Exponent
//Output
//c->Integer z=a^b
int pow(int &a,int &b ){
    if(b<=0)return 1;
    if(b==1)return a;
    int abd2=pow(a,b/2);
    if(b%2)return abd2*abd2*a;//If odd
    return abd2*abd2;     //Else even
}