/* 
    File:   main.cpp
    Author: David Duran
    Created on February 04, 2016, 09:37 PM
    Purpose:  Menu Assignment 5
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
void problem4();
void problem5();
int getLgth(int);                          //Problem 1
int getWdth(int);                          //Problem 1
int getArea(int,int,int);                  //Problem 1
void dsplDat(float,float,float);           //Problem 1
float getSale(float&,float&,float&,float&);//Problem 2
void fndHigh(float,float,float,float);     //Problem 2
int numAccd(int&,int&,int&,int&,int&);     //Problem 3
void findLow(int,int,int,int,int);         //Problem 3
int coinTos(int);                          //Problem 4
bool isPrime(int number);                  //Problem 5

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short nSoltn;//Problem Solution to display
    bool reDsply=true;
    
    //Menu to Display Solution
    do{
        //Input problem to display, i.e. Menu
        cout<<"Assignment 5 Problem Set"<<endl;
        cout<<"Type 1 to Display Gaddis 8thEd Chap6 Prob2"<<endl;
        cout<<"Type 2 to Display Gaddis 8thEd Chap6 Prob3"<<endl;
        cout<<"Type 3 to Display Gaddis 8thEd Chap6 Prob4"<<endl;
        cout<<"Type 2 to Display Gaddis 8thEd Chap6 Prob8"<<endl;
        cout<<"Type 3 to Display Gaddis 8thEd Chap6 Prob22"<<endl;
        cout<<"Type anything else to exit "<<endl<<endl;
        cin>>nSoltn;
        
        //Solutions to all the problems
        switch(nSoltn){
            case 1:{problem1();break;}
            case 2:{problem2();break;}
            case 3:{problem3();break;}
            case 4:{problem4();break;}
            case 5:{problem5();break;}
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
    cout<<endl<<"Problem 1: Gaddis 8thEd Chap6 Prob2"<<endl;
    //Declare and initialize variables
    float length,width,area;
    
    //Input data
    cout<<"Input Length of Rectangle"<<endl;
    cin>>length;
    cout<<"Input Width of Rectangle"<<endl;
    cin>>width;
    
    
    //Output the results
    dsplDat(length,width,area);
}
/******************************************************************************/
/*                                 Get Length                                 */
/******************************************************************************/
int getLgth(int length){
    if(length>=0){
        cout<<"Length is: "<<length<<endl;
    }else{
        cout<<"Invalid length"<<endl;
    }return length;
}

/******************************************************************************/
/*                                 Get Width                                  */
/******************************************************************************/
int getWdth(int width){
    if(width>=0){
        cout<<"Width is: "<<width<<endl;
    }else{
        cout<<"Invalid Width"<<endl;
    }return width;
}

/******************************************************************************/
/*                                 Get Area                                   */
/******************************************************************************/
int getArea(int length,int width,int area){
    area=length*width;
    if(area>=0){
    cout<<"The Area of the Rectangle is: "<<area<<endl;
    }else{
        cout<<"Please input a different Length and Width"<<endl;
    }return area;
}

/******************************************************************************/
/*                              Display Data                                  */
/******************************************************************************/
void dsplDat(float length,float width,float area){
    getLgth(length);
    getWdth(width);
    getArea(length,width,area);
}
/******************************************************************************/
/***********************************Problem2***********************************/
/******************************************************************************/
void problem2(){
    cout<<endl<<"Problem 2: Gaddis 8thEd Chap6 Prob3"<<endl;
    //Declare and initialize variables
    float ne,nw,se,sw;
    
    //Input data

    
    //Output the results
    getSale(ne,nw,se,sw);
    fndHigh(ne,nw,se,sw);
}
float getSale(float &ne,float &nw,float &se,float &sw){
    cout<<"Input Yearly sales for NorthEast"<<endl;
    cin>>ne;
    if(ne>=0.00f){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Quarterly Sales is: "<<ne/4<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<"Input Yearly sales for NorthWest"<<endl;
    cin>>nw;
    if(nw>=0.00f){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Quarterly Sales is: "<<nw/4<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<"Input Yearly sales for SouthEast"<<endl;
    cin>>se;
    if(se>=0.00f){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Quarterly Sales is: "<<se/4<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    cout<<"Input Yearly sales for SouthWest"<<endl;
    cin>>sw;
    if(sw>=0.00f){
        cout<<fixed<<setprecision(2)<<endl;
        cout<<"Quarterly Sales is: "<<sw/4<<endl;
    }else{
        cout<<"Invalid Number"<<endl;
    }
    return ne,nw,se,sw;
}

/******************************************************************************/
/*                              Display Data                                  */
/******************************************************************************/
void fndHigh(float ne,float nw,float se,float sw){
    if(ne>nw&&ne>se&&ne>sw){
        cout<<endl<<"Highest Sales is: NorthEast"<<endl;
        cout<<"Sales Figure Quarterly: "<<ne/4<<endl;
        cout<<"Sales Figure Yearly   : "<<ne<<endl;
    }else if(nw>ne&&nw>se&&nw>sw){
        cout<<endl<<"Highest Sales is: NorthWest"<<endl;
        cout<<"Sales Figure Quarterly: "<<nw/4<<endl;
        cout<<"Sales Figure Yearly   : "<<nw<<endl;
    }else if(se>nw&&se>ne&&se>sw){
        cout<<endl<<"Highest Sales is: SouthEast"<<endl;
        cout<<"Sales Figure Quarterly: "<<se/4<<endl;
        cout<<"Sales Figure Yearly   : "<<se<<endl;
    }else if(sw>nw&&sw>se&&sw>ne){
        cout<<endl<<"Highest Sales is: SouthWest"<<endl;
        cout<<"Sales Figure Quarterly: "<<sw/4<<endl;
        cout<<"Sales Figure Yearly   : "<<sw<<endl;
    }else{
        cout<<"Unable to Determine Highest Sales"<<endl;
    }
}
/******************************************************************************/
/***********************************Problem3***********************************/
/******************************************************************************/
void problem3(){
    cout<<endl<<"Problem 3: Gaddis 8thEd Chap6 Prob4"<<endl;
    //Declare and initialize variables
    int north,south,east,west,central;//Different Regions
    
    //Calls numAccd Function or Number of Accidents
    numAccd(north,south,east,west,central);
    
    //Calls findLow Function or Find Lowest
    findLow(north,south,east,west,central);
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
/******************************************************************************/
/***********************************Problem4***********************************/
/******************************************************************************/
void problem4(){
    cout<<endl<<"Problem 4: Gaddis 8thEd Chap6 Prob8"<<endl;
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
/******************************************************************************/
/***********************************Problem5***********************************/
/******************************************************************************/
void problem5(){
    cout<<endl<<"Problem 5: Gaddis 8thEd Chap6 Prob22"<<endl;
    //Declare and initialize variables
    int number;
    //Input Number to Check if it's a prime
    cout << "Enter a Number to Check if it is a Prime: ";
    cin >> number;
    //Outputs if it is a Prime or not
    if (isPrime(number)){
	cout << number << " is prime." << endl;
    }
    else{
	cout << number << " is not prime." << endl;
    }
}
/******************************************************************************/
/*                              Loop for Prime                                */
/******************************************************************************/
bool isPrime(int number){
    int i;

	for (i=2; i<number; i++){
		if (number % i == 0){return false;}
	}return true;	
}