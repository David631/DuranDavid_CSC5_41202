/* 
    Author: David Duran
    Created on January 21, 2016, 10:55 AM
    Purpose: Math Tutor
 */

//System Libraries
#include <iostream>
#include <iomanip>
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
    unsigned short prob1,prob2; //Random Number
    int       answer;           //Your Answer is displayed
    int       result;           //The actual Answer
    
    //System Time
    unsigned seed = time(0);
    
    //Random Number Generator
    srand(seed);
       
    //Calculate or map inputs to outputs
    prob1=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;//Random Number 1
    prob2=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;//Random Number 2
    result=prob1+prob2;                              //Equation to give result
    
    //Output your answer
    cout<<"  "<<setw(6)<<prob1<<endl;
    cout<<"+ "<<setw(6)<<prob2<<endl;
    cout<<"--------"<<endl;
    cin>>answer;                                   //Input your answer
    cout<<endl;
    
    //Set the answer
    if(answer==result){
        cout<<"Congratulations You Got The Answer Right!"<<endl;
    }else{
        cout<<"Your Answer is Wrong!"<<endl;
    }
    
    
    //Output the actual answer
    cout<<"The correct answer is = "<<result<<endl;//Outputs actual result
    
    //Exit stage right
    return 0;
}
