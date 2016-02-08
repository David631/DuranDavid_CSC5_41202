/* 
    File:   main.cpp
    Author: David Duran
    Created on February 07, 2016, 04:00 PM
    Purpose: Largest/Smallest Array Values
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int minimum,max;
    const int HILOWNM = 10;
    int ranNumb[HILOWNM]; //10 elements

    //Input 10 Numbers
    cout<<"Enter 10 Random Numbers:"<<endl;
    for(int i=0;i<HILOWNM;i++){
        cout<<"Enter value "
        <<(i+1)<<": "<<endl;
        cin>> ranNumb[i]; 
    }

    minimum=ranNumb[0];
    max=ranNumb[0];

    //Loop to find Low and Max
    for(int i=1;i<10;i++){
        if(minimum>ranNumb[i]){
                minimum=ranNumb[i];
        }else if(max<ranNumb[i]){
                max = ranNumb[i];
        }
    }
	
    //Output the Max/Minimum Numbers out of 10
    cout<<"Maximum number is: "<<max<<endl;
    cout<<"Minimum number is: "<<minimum<<endl;

    return 0;
}