/* 
 * File:   main.cpp
 * Author: David Duran
 * Created on January 12, 2016, 10:00 PM
 * Purpose: Ternary IF Statement
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
    
    grade=(score>=A?'A':(score>=B?'B':
         (score>=C?'C':(score>=D?'D':'F'))));
    
    cout<<"Your Grade: "<<grade<<endl;
    
    return 0;
}

