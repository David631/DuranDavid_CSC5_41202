/* 
    Author: David Duran
    Created on January 14, 2016, 05:48 PM
    Purpose: Math Tutor
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    const int MIN_VALUE = 0;    //Minimum value for random generator
    const int MAX_VALUE = 10000;//Maximum value for random generator
    int       prob1;            //Random Number
    int       prob2;            //Random Number
    int       answer;           //Your Answer is displayed
    int       result;           //The actual Answer
    char ch;
    
    //System Time
    unsigned seed = time(0);
    
    //Random Number Generator
    srand(seed);
       
    //Calculate or map inputs to outputs
    prob1=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;//Random Number 1
    prob2=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;//Random Number 2
    result=prob1+prob2;                              //Equation to give result
    
    //Output the results
    cout<<"  "<<prob1<<endl;
    cout<<"+ "<<prob2<<endl;
    cout<<"------------"<<endl;
    cin>>answer;                                   //Input your answer
    cout<<endl;
    cout<<"The correct answer is= "<<result<<endl;//Outputs actual result
    
    //Exit stage right
    return 0;
}
