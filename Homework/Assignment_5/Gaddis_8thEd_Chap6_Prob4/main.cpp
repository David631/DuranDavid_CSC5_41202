/* 
    File:   main.cpp
    Author: David Duran
    Created on February 03, 2016, 08:20 AM
    Purpose: Safest Driving Area
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int numAccd(int&,int&,int&,int&,int&);
void findLow(int,int,int,int,int);
// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int north,south,east,west,central;//Different Regions
    
    //Calls numAccd Function or Number of Accidents
    numAccd(north,south,east,west,central);
    
    //Calls findLow Function or Find Lowest
    findLow(north,south,east,west,central);
    
    //Exit stage right
    return 0;
}
/******************************************************************************/
/*                         Get Number of Accidents                            */
/******************************************************************************/
int numAccd(int &north,int &south,int &east,int &west,int &central){
    cout<<"Input Number of Automobile Accidents in the North Region"<<endl;
    cin>>north;
    if(north>=0){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Number of Automobile Accidents is: "<<north<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<"Input Number of Automobile Accidents in the South Region"<<endl;
    cin>>south;
    if(south>=0){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Number of Automobile Accidents is: "<<south<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<"Input Number of Automobile Accidents in the East Region"<<endl;
    cin>>east;
    if(east>=0){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Number of Automobile Accidents is: "<<east<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<"Input Number of Automobile Accidents in the West Region"<<endl;
    cin>>west;
    if(west>=0){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Number of Automobile Accidents is: "<<west<<endl;
    }
    cout<<"Input Number of Automobile Accidents in the Central Region"<<endl;
    cin>>central;
    if(central>=0){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Number of Automobile Accidents is: "<<central<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    return north,south,east,west;
}

/******************************************************************************/
/*                              Find the Lowest                               */
/******************************************************************************/
void findLow(int north,int south,int east,int west,int central){
    if(north<south&&north<east&&north<west&&north<central){
        cout<<endl<<"Lowest Number of Accidents is: North"<<endl;
        cout<<"Accident Figure: "<<north<<endl;
    }else if(south<north&&south<east&&south<west&&south<central){
        cout<<endl<<"Lowest Number of Accidents is: South"<<endl;
        cout<<"Accident Figure: "<<south<<endl;
    }else if(east<north&&east<south&&east<west&&east<central){
        cout<<endl<<"Lowest Number of Accidents is: East"<<endl;
        cout<<"Accident Figure: "<<east<<endl;
    }else if(west<north&&west<south&&west<east&&west<central){
        cout<<endl<<"Lowest Number of Accidents is: West"<<endl;
        cout<<"Accident Figure: "<<west<<endl;
    }else if(central<north&&central<south&&central<east&&central<west){
        cout<<endl<<"Lowest Number of Accidents is: central"<<endl;
        cout<<"Accident Figure: "<<central<<endl;
    }else{
        cout<<"Unable to Determine Highest Sales"<<endl;
    }
}