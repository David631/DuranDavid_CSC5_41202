/* 
 * File:   main.cpp
 * Author: rcc
 *
 * Created on January 12, 2016, 10:14 AM
 */

#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    char score;
    char grade;
    bool A,B,C,D,F;
    
    cout<<"Enter Score: ";
    cin>>score;
    
    if(90<=score<=100){
        grade='A';
    }   cout<<grade<<endl;
        
    if(80<=score<=89){
        grade='B';
    }   cout<<grade<<endl;
        
    if(70<=score<=79){
        grade='C';
    }   cout<<grade<<endl;
        
    if(60<=score<=69){
        grade='D';
    }   cout<<grade<<endl;
   
    if(0<=score<=59){
        grade='F';
        cout<<grade<<endl;
    }
    
   
    
    
    
    
    
    return 0;
}

