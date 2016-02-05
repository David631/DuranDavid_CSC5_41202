/* 
    File:   main.cpp
    Author: David Duran
    Created on February 03, 2016, 08:20 AM
    Purpose: isPrime Function
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool isPrime(int number);
// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int number;
    //Input Number to Check if it's a prime
    cout << "Enter a Number to Check if it is a Prime: ";
    cin >> number;
    //Outputs if it is a Prime or not
    if (isPrime(number)){
	cout << number << " is prime." << endl;
    }
    else{
	cout << number << " is not prime." << endl;
    }
}
/******************************************************************************/
/*                              Loop for Prime                                */
/******************************************************************************/
bool isPrime(int number){
    int i;

	for (i=2; i<number; i++){
		if (number % i == 0){return false;}
	}return true;	
}