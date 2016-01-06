/* 
 * Author: David Duran
 * Created on January 6, 2016, 11:35 AM
 * Purpose:  How many does it take?
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char  wtBill=1;//Weight in grams
const float cnvLbs=1.0f/453.5f;//Conversion from grams to lbs

//Function Prototypes

//Execution Begins Here
int main (int argc, char** argv) {
    //Declare
    unsigned int amtStl;    //Amount to steal
    unsigned short denom;   //Bill denomination
    unsigned char wtPers=80;//Weight person can carry in lbs
    unsigned char nPerps;   //Number of perpetrators
    
    //Input the number of coins
    cout<<"How much money would you like to acquire?"<<endl;
    cin>>amtStl;
    cout<<"What is the bill denomination desired?"   <<endl;
    cin>>denom;
    
    //Calculate the total
    nPerps=cnvLbs*amtStl*wtBill/denom/wtPers;
    
    //Output the results
    cout<<"Amount Desire = $"<<amtStl<<endl;
    cout<<"Denomination Desired = "<<denom<<endl;
    cout<<"Number of Individuals required for the job = "
            <<static_cast<int>(nPerps)<<endl;
    
    
    //Exit stage right
    return 0;
}