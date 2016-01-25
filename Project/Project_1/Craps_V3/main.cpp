/* 
    File:   main.cpp
    Author: David Duran
    Created on January 25, 2016, 11:06 AM
    Purpose: Craps Simple Game
 */

//System Libraries
#include <iostream>//I/O
#include <ctime>   //srand and rand function
#include <cstdlib> //time to set the random number seed
#include <fstream> //File I/O
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    unsigned short wins=0,losses=0,games;
    ofstream out;
    //Open the file
    out.open("CardGame.dat");
    
    //Input data
    cout<<"How man games of Craps would you like to play"<<endl;
    cout<<"Utilize a number between 10,000 and 40,000"<<endl;
    cin>>games;
    while(games<10000||games>40000){
        cout<<"How man games of Craps would you like to play"<<endl;
        cout<<"Utilize a number between 10,000 and 40,000"<<endl;
        cin>>games;
    }
    
    //Throw the dice
    for(int game=1;game<=games;game++){
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
                switch(sum==sum2){
                        case true:{wins++;kpRln=false;}
                        default:
                            if(sum2==7){losses++;kpRln=false;}
                }
            }while(kpRln); 
        }
    }
    
    //Output the results to the Screen
    cout<<"Out of "<<games<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<"You won "<<100.f*wins/games<<"% games and "<<endl;
    cout<<"You lost "<<100.0f*losses/games<<"% games"<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    
    //Output the results to a file
    out<<"Out of "<<games<<" played"<<endl;
    out<<"You won "<<wins<<" games and "<<endl;
    out<<"You lost "<<losses<<" games"<<endl;
    out<<"Percentage wise"<<endl;
    out<<"You won "<<100.f*wins/games<<"% games and "<<endl;
    out<<"You lost "<<100.0f*losses/games<<"% games"<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;

    //Exit stage right Close File
    out.close();
    return 0;
}