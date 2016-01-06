/* 
 * Author: David Duran
 * Created on January 6, 2016, 10:44 AM
 * Purpose:  Quarters,Nickels,Dimes
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constant
const char cnvQrtr=25;//Cents per quart
const char cnvDime=10;//Cents per dimes
const char cnvNikl=5;//Cents per nickel
const char cnvPnDl=100;//Conversion from pennies to dollars

//Function Prototypes

//Execution Begins Here
int main (int argc, char** argv) {
    //Declare
    unsigned char  nQrtrs,nNikls,nDimes;//Declare inputs, number of Q,D,N
    unsigned short total;               //total
    
    //Input the number of coins
    cout<<"How many quarters do you have 0-9"<<endl;
    cin>>nQrtrs;
    cout<<"How many dimes do you have 0-9"   <<endl;
    cin>>nDimes;
    cout<<"How many nickels do you have 0-9" <<endl;
    cin>>nNikls;
    
    //Calculate the total
    total=(nQrtrs-40)*cnvQrtr+(nDimes-48)*cnvDime+(nNikls-48)*cnvNikl;
    
    //Output the results
    cout<<"Number of Quarters input = "<<static_cast<int>(nQrtrs)<<endl;
    cout<<"Number of Dimes input = "   <<static_cast<int>(nDimes)<<endl;
    cout<<"Number of Nickels input = " <<static_cast<int>(nNikls)<<endl;
    cout<<"The dollar amount = $"      <<1.0f*total/cnvPnDl<<endl;
    
    
    //Exit stage right
    return 0;
}