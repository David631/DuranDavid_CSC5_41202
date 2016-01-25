/* 
    File:   main.cpp
    Author: David Duran
    Created on January 25, 2016, 11:06 AM
    Purpose: Craps Simple Game
 */

//System Libraries
#include <iostream>//I/O
#include <ctime>//srand and rand function
#include <cstdlib>//time to set the random number seed
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned short GAMES=36000;//Max number of throws
    //Frequency of our dice throws
    unsigned short wins=0,losses=0;
    
    //Input data
    
    //Throw the dice
    for(int game=1;game<=GAMES;game++){
        char die1=rand()%6+1;//Number between [1,6]
        char die2=rand()%6+1;//Number between [1,6]
        char sum=die1+die2;
        if(sum==2||sum==3||sum==12)losses++;
        else if(sum==7||sum==11)wins++;
        else{
            //Roll again
            bool kpRln=true;
            do{
                die1=rand()%6+1;//Number between [1,6]
                die2=rand()%6+1;//Number between [1,6]
                char sum2=die1+die2;
                if(sum==sum2){wins++;kpRln=false;}
                if(sum2==7){losses++;kpRln=false;}
            }while(kpRln);
            
        }
    }
    
    //Output the results
    cout<<"Out of "<<GAMES<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"You won "<<100.f*wins/GAMES<<"% games and "<<endl;
    cout<<"You lost "<<100.0f*losses/GAMES<<"% games"<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;

    //Exit stage right
    return 0;
}

