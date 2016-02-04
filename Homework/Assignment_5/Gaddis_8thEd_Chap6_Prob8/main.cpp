/* 
    File:   main.cpp
    Author: David Duran
    Created on February 04, 2016, 10:20 AM
    Purpose: Coin Toss
 */

//System Libraries
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
int coinTos(int);
// Execution Begins Here
int main(int argc, char** argv) {
    //Set Random Seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    int games,coin;//Number of Games
    
    cout<<"How many times do you want to toss the coin?"<<endl;
    cin>>games;
    //Loop Number of Coin Tosses
    for(int game=1;game<=games;game++){
        coinTos(coin);
    }

    //Exit stage right
    return 0;
}
/******************************************************************************/
/*                         Get Number of Accidents                            */
/******************************************************************************/
int coinTos(int coin){
    int head,tail;
    coin=rand()%2+1;
    switch(coin){
        case 1:cout<<"Heads"<<endl;break;
        case 2:cout<<"Tails"<<endl;break;
        default:cout<<"Try Again"<<endl;
    }return coin;
}