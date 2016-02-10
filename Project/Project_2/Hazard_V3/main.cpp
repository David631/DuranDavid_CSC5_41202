/* 
    File:   main.cpp
    Author: David Duran
    Created on February 02, 2016, 06:06 PM
    Purpose: Hazard
 */

//System Libraries
#include <iostream>//I/O
#include <ctime>   //srand and rand function
#include <cstdlib> //time to set the random number seed
#include <fstream> //File I/O
#include <iomanip> //Formatting
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void dsplFil(unsigned short&,unsigned short&,unsigned short&,float&,float&);

// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned int LIMIT=1500;//Limit of $$ able to put on table
    float bet,wallet;             //Amount $ able to bet and Amount on user
    unsigned int sum,sum2,main;   //Main = #5-9, sum=die1+die2, sum2=die1+die2
    unsigned short wins=0,losses=0,count=0;//Number of Wins, Losses, and Games
    char retry='y',die1,die2;     //Dice #1: 1-6,Dice #2: 1=6,Replay
    ofstream out;                  //Allows the File to be read
    
    //Hazard Game Setup
    cout<<"Welcome to The Game of 'Hazard'!"<<endl;
    cout<<"How Much $$ are you carrying?"<<endl;
    cin>>wallet;
    cout<<"How much $$ would you like to Bet/Game?(Limit=$1500)"<<endl;
    cin>>bet;
    cout<<"Choose a Number between 5-9"<<endl;
    cin>>main;
    bet=bet<LIMIT?bet:LIMIT;//Limits the amount able to bet
    
    //Throw Dice
    while(retry=='y'){
        die1=rand()%6+1;
        die2=rand()%6+1;
        sum=die1+die2;
        if(sum==2||sum==3){
            count++;
            losses++;
            wallet-=bet;
            cout<<"Your Roll= "<<sum<<endl;
            cout<<"You Lose!"<<endl;
            cout<<"Play Again?(y/n)"<<endl;
            cin>>retry;
        }else if(sum==main){
            count++;
            wins++;
            wallet+=bet;
            cout<<"Your Roll: "<<sum<<endl;
            cout<<"You Won!"<<endl;
            cout<<"Play Again?(y/n)"<<endl;
            cin>>retry;
        }else if(sum==11){
            if(main==5||main==9||main==6||main==8){
                count++;
                losses++;
                wallet-=bet;
                cout<<"Your Roll: "<<sum<<endl;
                cout<<"You Lose!"<<endl;
                cout<<"Play Again?(y/n)"<<endl;
                cin>>retry;
            }else if(main==7){
                count++;
                wins++;
                wallet+=bet;
                cout<<"Your Roll: "<<sum<<endl;
                cout<<"You Won!"<<endl;
                cout<<"Play Again?(y/n)"<<endl;
                cin>>retry;
            }
        }else if(sum==12){
            if(main==5||main==9||main==7){
                count++;
                losses++;
                wallet-=bet;
                cout<<"Your Roll: "<<sum<<endl;
                cout<<"You Lose!"<<endl;
                cout<<"Play Again?(y/n)"<<endl;
                cin>>retry;
            }else if(main==6||main==8){
                count++;
                wins++;
                wallet+=bet;
                cout<<"Your Roll: "<<sum<<endl;
                cout<<"You Won!"<<endl;
                cout<<"Play Again?(y/n)"<<endl;
                cin>>retry;
            }
        }else{
            bool kpRln=true;
            do{
                kpRln=0;
                kpRln++;
                die1=rand()%6+1;
                die2=rand()%6+1;
                sum2=die1+die2;
                cout<<"You Roll: "<<sum<<endl;
                switch(sum==sum2){
                    case true:{
                        count++;
                        wins++;
                        wallet+=bet;
                        kpRln=false;
                        cout<<"Your Roll: "<<sum2<<endl;
                        cout<<"You Won!"<<endl;
                        cout<<"Play Again?(y/n)"<<endl;
                        cin>>retry;}
                        default:
                            if(sum2==main){
                                cout<<"You Roll: "<<sum2<<endl;
                                cout<<"Your First Roll: "<<sum<<endl;
                                kpRln=true;
                                if(kpRln==3){
                                    count++;
                                    losses++;
                                    wallet-=bet;
                                    kpRln=false;
                                    cout<<"Your Roll: "<<sum2<<endl;
                                    cout<<"You Lose!"<<endl;
                                    cout<<"Play Again?(y/n)"<<endl;
                                    cin>>retry;}
                            }
                }
            }while(kpRln);
        }
    }
    cout<<"Number of Games Played: "<<count<<endl;
    cout<<"Number of Games Won: "<<wins<<endl;
    cout<<"Number of Games Lost: "<<losses<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Percentage of Games Won: "<<100.0f*wins/count<<"%"<<endl;
    cout<<"Percentage of Games Lost: "<<100.0f*losses/count<<"%"<<endl;
    cout<<"Current Wallet: $"<<wallet<<endl;
    cout<<"Bet/Game: "<<bet<<endl;
    dsplFil(count,wins,losses,wallet,bet);
    out.close();
    return 0;
}
/******************************************************************************/
/*                          Display File                                      */
/******************************************************************************/
void dsplFil(unsigned short &count,unsigned short &wins,
            unsigned short &losses,float &wallet,float &bet){
    ofstream out;
    out.open("Hazard.dat");
    out<<"Number of Games Played: "<<count<<endl;
    out<<"Number of Games Won: "<<wins<<endl;
    out<<"Number of Games Lost: "<<losses<<endl;
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"Percentage of Games Won: "<<100.0f*wins/count<<"%"<<endl;
    out<<"Percentage of Games Lost: "<<100.0f*losses/count<<"%"<<endl;
    out<<"Current Wallet: $"<<wallet<<endl;
    out<<"Bet/Game: "<<bet<<endl;
}