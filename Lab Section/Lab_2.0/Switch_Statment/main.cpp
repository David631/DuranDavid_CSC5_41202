/* 
 * File:   main.cpp
 * Author: David Duran
 * Created on January 12, 2016, 10:14 AM
 * Purpose: Switch Statement
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    unsigned char A=90,B=80,C=70,D=60,F=50;
    unsigned short score;
    unsigned char grade;
    
    cout<<"Insert Score: "<<endl;
    cin>>score;
    
    cout<<"Your Score is: "<<static_cast<int>(score)<<'%'<<endl;
    
    switch(score>=A){
		case true:grade='A';break;
		default:
		   switch(score>=B){
		      case true:grade='B';break;
		      default:
		         switch(score>=C){
		            case true:grade='C';break;
		            default:
		               switch(score>=D){
		                  case true:grade='D';break;
		                  default:  grade='F';
	                   }
	             }
	       }
	}
    
    cout<<"Your Grade: "<<grade<<endl;
    
    return 0;
}

