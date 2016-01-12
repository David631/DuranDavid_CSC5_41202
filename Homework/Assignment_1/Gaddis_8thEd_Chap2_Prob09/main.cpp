/* 
    Author: David Duran
    Created on January 11, 2016, 10:25 PM
    Purpose: Circuit Board Price
*/

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
	
    //Declare and initialize variables
    float PRCPRFT =.35f;//Percent Profit
    float CRCTBRD =14.95f;//Circuit Board Cost
    float SELLPRI;//Selling Price of Circuit Board
    
    SELLPRI=CRCTBRD/(1-PRCPRFT);
    
    //Output the results
    cout<<"Cost of Circuit Board= $"<<CRCTBRD<<endl;
    cout<<"Electronics Company Percent Profit= "<<PRCPRFT<<'%'<<endl;
    cout<<"Selling Price of Circuit Board= $"<<SELLPRI<<endl;
    
    
    //Exit stage right
    return 0;
}



