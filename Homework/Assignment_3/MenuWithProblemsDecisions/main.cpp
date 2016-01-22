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
        cout<<"Type 4 to Display Gaddis 8thEd Chap4 Prob2"<<endl;
        cout<<"Type 5 to Display Gaddis 8thEd Chap4 Prob3"<<endl;
        cout<<"Type 6 to Display Savitch 8thEd Chap3 Prob12"<<endl;
        cout<<"Type 7 to Display Savitch 9thEd Chap3 Prob3"<<endl;
        cout<<"Type 8 to Display Savitch 7thEd Chap3 Prob1"<<endl;
        cout<<"Type 9 to Display Gaddis 8thEd Chap4 Prob11"<<endl;
        cout<<"Type 10 to Display Gaddis 8thEd Chap4 Prob1"<<endl;
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
    			break;
            }
            case 4:{
            	//Problem to Solve
            	cout<<endl<<"Gaddis 8thEd Chap4 Prob2"<<endl<<endl;
                cout<<endl<<"The Body Max Index Calculator"<<endl<<endl;
                //Declare and initialize variables
                unsigned int number;//Number between 1-10

                //Input data
                cout<<"Insert a number between 1-10"<<endl;
                cin>>number;

                switch(number){
                        case 1:cout<<"I"<<endl;//1 in Roman Numeral
                        break;
                        case 2:cout<<"II"<<endl;//2 in Roman Numeral
                        break;
                        case 3:cout<<"III"<<endl;//3 in Roman Numeral
                        break;
                        case 4:cout<<"IV"<<endl;//4 in Roman Numeral
                        break;
                        case 5:cout<<"V"<<endl;//5 in Roman Numeral
                        break;
                        case 6:cout<<"VI"<<endl;//6 in Roman Numeral
                        break;
                        case 7:cout<<"VII"<<endl;//7 in Roman Numeral
                        break;
                        case 8:cout<<"VIII"<<endl;//8 in Roman Numeral
                        break;
                        case 9:cout<<"IX"<<endl;//9 in Roman Numeral
                        break;
                        case 10:cout<<"X"<<endl;//10 in Roman Numeral
                        break;
                        default: cout<<"Number Invalid"
                        <<endl;//Invalid if 1-10 is not selected
                }
                cout<<endl;
                break;
            }
            case 5:{
            	//Problem to Solve
            	cout<<endl<<"Gaddis 8thEd Chap4 Prob3"<<endl<<endl;
                cout<<endl<<"The Magic Dates"<<endl<<endl;
                //Declare and initialize variables
    		int month,day,year;//Month Day Year
    		int magic;         //Month * Day = Year
    
    		//Input data
    		cout<<"Insert Month in numeric form"<<endl;
    		cin>>month;
    		cout<<"Insert Day"<<endl;
    		cin>>day;
    		cout<<"Insert a two-digit year"<<endl;
    		cin>>year;
    
    		//Calculate or map inputs to outputs
    		magic=month*day;//To calculate if Month*Day is equal to the year
    
    		if(magic==year){
        		cout<<"This Date is Magic!"<<endl;
    		}else{
        		cout<<"This Date is not Magic!"<<endl;
    		}
    			cout<<endl;
                break;
            }
            case 6:{
                //Problem to Solve
    		cout<<endl<<"Savitch 8thEd Chap3 Prob12"<<endl<<endl;
    		cout<<endl<<"The finite sum for PI"<<endl<<endl;
    
    		//Declare and initialize variables
    		unsigned int nTerms;     //Number of Terms
    		float apprxPI=1;         //Approximate of PIE
    		char sign=-1;            //Sin
    		const float PI=4*atan(1);//PIE

    		//Input the Value x
    		cout<<"Input number of Terms to Approximate PI"<<endl;
    		cin>>nTerms;
    
    		//calculate e^x
    		for(int i=2,j=3;i<=nTerms;i++,j+=2){
        		apprxPI+=(sign/static_cast<float>(j));
        		sign*=-1;
    		}
    		apprxPI*=4;
    
    		//Output the results
    		cout<<"The exact  value of PI="<<PI<<endl;
    		cout<<"The number of terms it took to approx PI="<<nTerms<<endl;
    		cout<<"The approx value of PI="<<apprxPI<<endl<<endl;
                break;
            }
            case 7:{
                //Problem to solve
    		cout<<endl<<"Solution to Savich 9thEd Chap3 Prob3"<<endl;
    		cout<<endl<<"The Roman Numeral Conversion Program"<<endl;
    
    		//Set the random number seed
    		srand(static_cast<unsigned int>(time(0)));
    
    		//Declare and initialize variables
    		unsigned short number=rand()%2001+1000;//[1000,3000]
    		unsigned char  n1000s,n100s,n10s,n1s;  //Number of 10^x's
    		cout<<"The number to convert = "<<number<<endl;
    
    		//Calculate the number of 1000's,100's,10's,1's
    		n1000s=(number-number%1000)/1000;//Number of 1000's
    		number=(number-n1000s*1000);     //Subtract off 1000's
    		n100s =(number-number%100)/100;  //Number of 100's
    		number=(number-n100s*100);       //Subtract off 100's
    		n10s  =(number-number%10)/10;    //Number of 10's
    		n1s   =(number-n10s*10);         //Subtract off 10's to get 1's
    
    		//Output the number and it's components
    		cout<<"The number of 1000's = "<<static_cast<int>(n1000s)<<endl;
    		cout<<"The number of 100's  = "<<static_cast<int>(n100s)<<endl;
    		cout<<"The number of 10's   = "<<static_cast<int>(n10s)<<endl;
    		cout<<"The number of 1's    = "<<static_cast<int>(n1s)<<endl;
    
    		//Output the results
    		cout<<"The Roman Numeral equivalent = ";
    
	 	//Output the 1000's
    		switch(n1000s){
                    case 3: cout<<"M";
                    case 2: cout<<"M";
                    case 1: cout<<"M";
    		}
    
    		//Output the 100's
    		switch(n100s){
                    case 9: cout<<"CM";break;
                    case 8: cout<<"DCCC";break;
                    case 7: cout<<"DCC";break;
                    case 6: cout<<"DC";break;
                    case 5: cout<<"D";break;
                    case 4: cout<<"CD";break;
                    case 3: cout<<"C";
                    case 2: cout<<"C";
                    case 1: cout<<"C";
    		}
    
    		//Output the 10's
    		switch(n10s){
                    case 9: cout<<"XC";break;
                    case 8: cout<<"LXXX";break;
                    case 7: cout<<"LXX";break;
                    case 6: cout<<"LX";break;
                    case 5: cout<<"L";break;
                    case 4: cout<<"XL";break;
                    case 3: cout<<"X";
                    case 2: cout<<"X";
                    case 1: cout<<"X";
    		}
    
 		//Output the 1's
    		switch(n1s){
                    case 9: cout<<"IX";break;
                    case 8: cout<<"VIII";break;
                    case 7: cout<<"VII";break;
                    case 6: cout<<"VI";break;
                    case 5: cout<<"V";break;
                    case 4: cout<<"IV";break;
                    case 3: cout<<"I";
                    case 2: cout<<"I";
                    case 1: cout<<"I";
    		}
    		cout<<endl<<endl;
                break;
            }
            case 8:{
                //Problem to solve
    		cout<<endl<<"Solution to Savich 7thEd Chap3 Prob1"<<endl;
 		cout<<endl<<"The Rock-Paper-Scissor Game"<<endl;
    
    		//Set the random number seed and declare the question
    		srand(static_cast<unsigned int>(time(0)));
    		char qwstion;  //Question, does player want to keep playing
    		//Loop until player wants to Quit
    		do{    
        		//Declare and initialize variables
        		char computr;  //The computers play
        		char player;   //The players move
       

        		//Input the players turn
        		do{
                            cout<<endl<<"What is your move P,R,S?"<<endl;
                            cin>>player;
                            player=toupper(player);
        		}while(!(player=='P'||player=='R'||player=='S'));

        		//Computer Generated Play
        		do{
                            computr=rand()%4+80;
        		}while(computr=='Q');

        		//Output the moves by the computer and player
        		cout<<"The Computer played "<<computr<<endl;
        		cout<<"The Players move   "<<player<<endl;

        		//Determine the result
        		if(computr==player){
                            cout<<"The result is a tie"<<endl;
        		}else if(player=='P'&&computr=='R'){
                            cout<<"The Player Wins!"<<endl;
        		}else if(player=='R'&&computr=='S'){
                            cout<<"The Player Wins!"<<endl;
        		}else if(player=='S'&&computr=='P'){
                            cout<<"The Player Wins!"<<endl;
        		}else{
                            cout<<"The Player Loses!"<<endl;
        		}

        		//Keep Playing?
        		cout<<endl<<"Do you want to continue playing?"<<endl;
        		cin>>qwstion;
    		}while(toupper(qwstion)=='Y');
    			cout<<endl<<endl;
                break;
            }
            case 9:{
                //Problem to Solve
		cout<<endl<<"Solution to Gaddos 8thEd Chap3 Prob11"<<endl;
 		cout<<endl<<"The Math Tutor"<<endl;
    
    		//Declare and initialize variables
    		const int MIN_VALUE = 0;    //Minimum value for random generator
    		const int MAX_VALUE = 10000;//Maximum value for random generator
    		unsigned short prob1,prob2; //Random Number
    		int       answer;           //Your Answer is displayed
    		int       result;           //The actual Answer
    
    		//System Time
    		unsigned seed = time(0);
    
    		//Random Number Generator
    		srand(seed);
       
    		//Calculate or map inputs to outputs
    		prob1=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;//Rand Number 1
    		prob2=(rand()%(MAX_VALUE-MIN_VALUE+1))+MIN_VALUE;//Rand Number 2
    		result=prob1+prob2;                    //Equation to give result
    
    		//Output your answer
    		cout<<"  "<<setw(6)<<prob1<<endl;
    		cout<<"+ "<<setw(6)<<prob2<<endl;
    		cout<<"--------"<<endl;
    		cin>>answer;                     //Input your answer
    		cout<<endl;
    
    		//Set the answer
    		if(answer==result){
        		cout<<"Congratulations You Got The Answer Right!"<<endl;
    		}else{
        		cout<<"Your Answer is Wrong!"<<endl;
    		}
    
    
    		//Output the actual answer
    		cout<<"The correct answer is = "<<result<<endl<<endl;
                break;
            }
            case 10:{
                //Problem to Solve
                cout<<endl<<"Gaddis 8thEd Chap4 Prob1"<<endl<<endl;
                cout<<endl<<"The Minimum/Maximum problem"<<endl<<endl;
    
                //Declare and initialize variables
                signed short numbr1,numbr2;//Number one Number two
                signed short A,B;
                char great; //Determines if numbr1 > or < than numbr2
    
                //Input data
                cout<<"Type a Random Number"<<endl;
                cin>>numbr1;
                cout<<"Type a Second Random Number"<<endl;
                cin>>numbr2;
    
                //Output the results
                great=(numbr1==numbr2?'=':(numbr1>numbr2?'>':'<'));
                cout<<"The Number "<<numbr1<<" is "<<great<<" than "
                        <<numbr2<<endl<<endl;
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


