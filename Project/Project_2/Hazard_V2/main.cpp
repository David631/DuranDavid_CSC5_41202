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
void dsplGme(int,unsigned short,unsigned short,float,float);
void dsplFil(unsigned short&,unsigned short&,unsigned short&,float&,float&);
char dsplMan(char);

// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned int LIMIT=1500;//Table single bet limit = $1500
    unsigned short wins=0,losses=0,games,game;
    unsigned int cntRoll,maxRoll=0,totRoll=0,main;
    float wallet,bet;//$'s
    char yes,retry;//Character to answer if winning double the bet
    ofstream out;
    
    //Input data
    cout<<"How man games of 'Hazard' would you like to play"<<endl;
    dsplMan(main);
    cout<<"How much do you have to gamble?"<<endl;
    cin>>wallet;
    cout<<"How much would you like to bet/game$?"<<endl;
    cin>>bet;
    cout<<"If you win would you like to double your bet (y/n)"<<endl;
    cin>>yes;
    //Modify the bet based upon the table limit
    bet=bet<LIMIT?bet:LIMIT;//Ternary Operator
    
    //Throw the dice
    while(retry=='y'&&retry=='Y'||retry!='n'){
        game++;
        char die1=rand()%6+1;//Number between [1,6]
        char die2=rand()%6+1;//Number between [1,6]
        char sum=die1+die2;
        cntRoll++;//Every time dice are thrown, Increment
        if(sum==2||sum==3){
            losses++;
            wallet-=bet;
            cout<<"Your Roll= "<<sum<<endl;
            cout<<"You Lost!"<<endl;
            cout<<"Play Again?(y/n)"<<endl;
            cin>>retry;
        }else if(sum==main){
            wins++;
            wallet+=bet;
            bet=yes=='y'?2*bet:bet;//Another Ternary
            bet=bet<LIMIT?bet:LIMIT;
            cout<<"Your Roll= "<<sum<<endl;
            cout<<"You Win!"<<endl;
            cout<<"Play Again?(y/n)"<<endl;
            cin>>retry;
        }else if(sum==11){
        	if(main==5||main==9||main==6||main==8){
                    losses++;
                    wallet-=bet;
                    cout<<"Your Roll= "<<sum<<endl;
                    cout<<"You Lost!"<<endl;
                    cout<<"Play Again?(y/n)"<<endl;
                    cin>>retry;
        	}else if(main==7){
                    wins++;
                    wallet+=bet;
                    bet=yes=='y'?2*bet:bet;//Another Ternary
                    bet=bet<LIMIT?bet:LIMIT;
                    cout<<"Your Roll= "<<sum<<endl;
                    cout<<"You Win!"<<endl;
                    cout<<"Play Again?(y/n)"<<endl;
                    cin>>retry;
        	}
        }else if(sum==12){
        	if(main==5||main==9||main==7){
                    losses++;
                    wallet-=bet;
                    cout<<"Your Roll= "<<sum<<endl;
                    cout<<"You Lost!"<<endl;
                    cout<<"Play Again?(y/n)"<<endl;
                    cin>>retry;
        	}else if(main==6||main==8){
                    wins++;
                    wallet+=bet;
                    bet=yes=='y'?2*bet:bet;//Another Ternary
                    bet=bet<LIMIT?bet:LIMIT;
                    cout<<"Your Roll= "<<sum<<endl;
                    cout<<"You Win!"<<endl;
                    cout<<"Play Again?(y/n)"<<endl;
                    cin>>retry;
        		}
        }else{
            //Roll again
            bool kpRln=true;
            do{
                kpRln=0;
                kpRln++;
                die1=rand()%6+1;//Number between [1,6]
                die2=rand()%6+1;//Number between [1,6]
                char sum2=die1+die2;
                switch(sum==sum2){
                        case true:{
                            wins++;
                            wallet+=bet;
                            kpRln=false;}
                        default:
                            if(sum2==main){
                                losses++;
                                wallet-=bet;
                                kpRln=true;}
                }
            }while(kpRln); 
        }
        totRoll+=cntRoll;
        if(cntRoll>maxRoll)maxRoll=cntRoll;
    }
    
    //Output the results to the Screen
    dsplGme(games,wins,losses,wallet,bet);
    
    //Output the results to a file
    dsplFil(games,wins,losses,wallet,bet);
    
    
    //Exit stage right Close File
    out.close();
    return 0;
}
/******************************************************************************/
/*                                  Display Info                              */
/******************************************************************************/
void dsplGme(int game,unsigned short wins,
            unsigned short losses,float wallet,float bet){
    cout<<"Out of "<<game<<" played"<<endl;
    cout<<"You won "<<wins<<" games and "<<endl;
    cout<<"You lost "<<losses<<" games"<<endl;
    cout<<"Percentage wise"<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"You won "<<100.f*wins/game<<"% games and "<<endl;
    cout<<"You lost "<<100.0f*losses/game<<"% games"<<endl;
    cout<<"Your wins and losses total = "<<wins+losses<<endl;
    cout<<"My Wallet Contains $"<<wallet<<endl;
    cout<<"My Bets were = $"<<bet<<endl;
}
/******************************************************************************/
/*                                  Display Info                              */
/******************************************************************************/
void dsplFil(unsigned short &game,unsigned short &wins,
            unsigned short &losses,float &wallet,float &bet){
    ofstream out;
    out.open("Hazard.dat");
    out<<"Out of "<<game<<" played"<<endl;
    out<<"You won "<<wins<<" games and "<<endl;
    out<<"You lost "<<losses<<" games"<<endl;
    out<<"Percentage wise"<<endl;
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"You won "<<100.f*wins/game<<"% games and "<<endl;
    out<<"You lost "<<100.0f*losses/game<<"% games"<<endl;
    out<<"Your wins and losses total = "<<wins+losses<<endl;
    out<<"My Wallet Contains $"<<wallet<<endl;
    out<<"My Bets were = $"<<bet<<endl;
}
/******************************************************************************/
/*                                  Display Info                              */
/******************************************************************************/
char dsplMan(char main){
    do{
        cout<<"Pick a Number between 5-9"<<endl;
        cin>>main;
    }while(!main<5&&!main>9);
    return main;
}