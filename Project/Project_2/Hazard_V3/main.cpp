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
void dsplInt();
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);
// Execution Begins Here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare and initialize variables
    const unsigned int LIMIT=1500;//Limit of $$ able to put on table
    float bet,wallet;             //Amount $ able to bet and Amount on user
    unsigned int sum,sum2,main;   //Main = #5-9, sum=die1+die2, sum2=die1+die2
    unsigned short wins=0,losses=0,count=0;//Number of Wins, Losses, and Games
    char retry='y',die1,die2,instrut;     //Dice #1: 1-6,Dice #2: 1=6,Replay
    const int SIZE=100;
    int array[SIZE];
    ofstream out,info;                  //Allows the File to be read
    
    //Hazard Game Setup
    cout<<"Welcome to The Game of 'Hazard'!"<<endl;
    cout<<"Would you like to read the Rules?(y/n)"<<endl;
    cin>>instrut;
    if(instrut=='y'){
        dsplInt();
    }
    cout<<"How Much $$ are you carrying?"<<endl;
    cin>>wallet;
    cout<<"How much $$ would you like to Bet/Game?(Limit=$1500)"<<endl;
    cin>>bet;
    do{
        cout<<"Choose a Number between 5-9"<<endl;
        cin>>main;
    }while(main<5&&main>9);
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
                                count++;
                                losses++;
                                wallet-=bet;
                                kpRln=false;
                                cout<<"Your First Roll: "<<sum<<endl;
                                cout<<"Your Second Roll: "<<sum2<<endl;
                                cout<<"You Lose!"<<endl;
                                cout<<"Play Again?(y/n)"<<endl;
                                cin>>retry;
                                }else if(kpRln==3){
                                    count++;
                                    losses++;
                                    wallet-=bet;
                                    kpRln=false;
                                    cout<<"Your Roll: "<<sum2<<endl;
                                    cout<<"You Lose!"<<endl;
                                    cout<<"Play Again?(y/n)"<<endl;
                                    cin>>retry;}
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
    
    //Fill the array with random 2 digit numbers
    fillAry(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Test finding the smallest number in the list
    bublSrt(array,SIZE);
            
    //Print the array
    prntAry(array,SIZE,10);
    dsplFil(count,wins,losses,wallet,bet);
    out.close();
    info.close();
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
/******************************************************************************/
/*                          Display Instructions                              */
/******************************************************************************/
void dsplInt(){
    ofstream info;
    info.open("Instructions.dat");
    info<<"Pick a number between 5 and 9, this is the main."
           "Then throw two dice.If you roll the main, you win."
         "If you roll a 2 or a 3, you lose (throws out)."
          "If you roll an 11 or 12, the result depends on the main:"
        "with a main of 5 or 9, you throw out with both an 11 and a 12"
        "with a main of 6 or 8, you throw out with an 11 but nicks with a 12"
        "with a main of 7, you nick with an 11 but throw out with a 12."
        "If you neither nick nor throw out, the number thrown is called the chance."
        "You throw the dice again: if you roll the chance, you win "
        "if you roll the main, you lose (unlike on the first throw)"
        "if you roll neither, you keep throwing until you roll"
        "three times without getting one or the other, winning with the chance,"
        " losing with the main, and losing without getting either."<<endl;
}
/******************************************************************************/
/*                                      Void 1                                */
/******************************************************************************/
void fillAry(int a[],int n){
    //loop and fill the array with random numbers
    for(int i=0;i<n;i++){ 
        a[i]=rand()%6+1;//[10,99]
    }
}

/******************************************************************************/
/*                                      Void 2                                */
/******************************************************************************/
void prntAry(int a[],int n,int perLine){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

/******************************************************************************/
/*                                 Bubble Sort                                */
/******************************************************************************/
void bublSrt(int a[],int n){
    //Outside loop to test if any swaps happen
    bool swap;
    do{
        swap=false;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
            int temp=a[j];//Exclusive or XOR
            a[j]=a[j+1];//Exclusive or XOR
            a[j+1]=temp;
            swap=true;
            }
        }
    }while(swap);
}