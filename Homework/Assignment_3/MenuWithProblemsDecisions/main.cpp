/* 
    File:   main.cpp
    Author: David Duran
    Created on January 19, 2016, 08:32 AM
    Purpose:  Menu
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

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
        cout<<"Type 3 to Display Problem 3"<<endl;
        cout<<"Type 4 to Display Problem 4"<<endl;
        cout<<"Type 5 to Display Problem 5"<<endl;
        cout<<"Type 6 to Display Problem 6"<<endl;
        cout<<"Type 7 to Display Problem 7"<<endl;
        cout<<"Type 8 to Display Problem 8"<<endl;
        cout<<"Type 9 to Display Problem 9"<<endl;
        cout<<"Type 10 to Display Problem 10"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{
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
                break;
            }
            case 2:{
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
                break;
            }
            case 3:{
                cout<<endl<<"Solution to Problem 3"<<endl<<endl;
                break;
            }
            case 4:{
                cout<<endl<<"Solution to Problem 4"<<endl<<endl;
                break;
            }
            case 5:{
                cout<<endl<<"Solution to Problem 5"<<endl<<endl;
                break;
            }
            case 6:{
                cout<<endl<<"Solution to Problem 6"<<endl<<endl;
                break;
            }
            case 7:{
                cout<<endl<<"Solution to Problem 7"<<endl<<endl;
                break;
            }
            case 8:{
                cout<<endl<<"Solution to Problem 8"<<endl<<endl;
                break;
            }
            case 9:{
                cout<<endl<<"Solution to Problem 9"<<endl<<endl;
                break;
            }
            case 10:{
                cout<<endl<<"Solution to Problem 10"<<endl<<endl;
                break;
            }
            default:{
                cout<<"Exiting the Program"<<endl;
                reDsply=false;
            }
        }    
    }while(reDsply);
    //Exit stage right
    return 0;
}

