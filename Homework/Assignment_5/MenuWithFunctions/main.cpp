/* 
    File:   main.cpp
    Author: David Duran
    Created on January 19, 2016, 08:32 AM
    Purpose:  Menu Assignment 3
 */

//System Libraries
#include <iostream>//I/O
#include <iomanip> //Formatting
#include <cmath>   //C++ Math
#include <cstdlib> //Rand Function
#include <ctime>   //Time to set the Random Number Seed
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void problem1();
void problem2();
void problem3();

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Assignment 3 Problem Set"<<endl;
        cout<<"Type 1 to Display Savitch 8thEd Chap3 Prob10"<<endl;
        cout<<"Type 2 to Display Savitch 8thEd Chap3 Prob11"<<endl;
        cout<<"Type 3 to Display Gaddis 8thEd Chap4 Prob5"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }    
    }while(reDsply);
    //Exit stage right
    return 0;
}

/******************************************************************************/
/***********************************Problem1***********************************/
/******************************************************************************/
void problem1(){
    cout<<endl<<"Savitch 8thEd Chap3 Prob10"<<endl<<endl;
    cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;

    //Declare Variables
    unsigned int fi,fim1,fim2;//Desiginations in the sequence
    unsigned short nTerms;    //Number of terms in the sequence
    unsigned short counter;   //Current position in the sequence
    const char DREPRO=5;        //Days to Reproduce
    float crudWt;             //Weight to Crud
    unsigned int nDays;       //Number of days to grow Crud

    //Initialize the sequence
    fim2=fim1=1;              //Start the Sequence
    counter=2;                //Initialize the counter

    //Input the number of terms in the sequence
    cout<<"Input the initial weight of the crud in lbs"<<endl;
    cin>>crudWt;
    cout<<"How many days will the crud be allowed to grow"<<endl;
    cin>>nDays;

    //Calculate the number of terms
    nTerms=nDays/DREPRO+1;

    //Output or Calculate the output required
    if(nTerms==1){
        cout<<"After "<<nDays<<" days the crud weighs "
                <<fim2*crudWt<<"(lbs)"<<endl<<endl;
    }else if(nTerms==2){
        cout<<"After "<<nDays<<" days the crud weighs "
                <<fim1*crudWt<<"(lbs)"<<endl<<endl;
    }else{
        do{
            fi=fim1+fim2;
            counter++;
            fim2=fim1;
            fim1=fi;
        }while(counter<nTerms);
        cout<<"After "<<nDays<<" days the crud weighs "
                <<fi*crudWt<<"(lbs)"<<endl<<endl;
    }
}
/******************************************************************************/
/***********************************Problem2***********************************/
/******************************************************************************/
void problem2(){
    //Problem to Solve
    cout<<endl<<"Savitch 8thEd Chap3 Prob10"<<endl<<endl;
    cout<<endl<<"The Fibonacci Sequence"<<endl<<endl;

    //Declare and initialize variables
    float etox=1,x;//E^x
    const unsigned char nTerms=13;

    //Input the Value x
    cout<<"Input x of e^x computation"<<endl;
    cin>>x;

    //calculate e^x
    for(int n=1;n<=nTerms;n++){
        //Declare and Initialize Variables
        unsigned int factN=1;//N and N!

        //Calculate the factorial
        for(int i=1;i<=n;i++){
            factN*=i;
        }

        //Calculate e^x with the above factorial
        etox+=pow(x,n)/factN;
    }

    //Output the results
    cout<<"The exact value of e^"<<x<<"="<<exp(x)<<endl;
    cout<<"The approx value of e^"<<x<<"="<<etox<<endl<<endl;
}
/******************************************************************************/
/***********************************Problem3***********************************/
/******************************************************************************/
void problem3(){
    cout<<endl<<"Gaddis 8thEd Chap4 Prob5"<<endl<<endl;
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
    cout<<endl;
}
