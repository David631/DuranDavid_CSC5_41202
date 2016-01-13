/* 
 * Author:David Duran
 * Created on January 12, 2016, 10:14 AM
 * Purpose: Independent IF Statement
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
    
    if(score>=A)            grade='A';
    if(score>=B && score<A) grade='B';
    if(score>=C && score<B) grade='C';
    if(score>=D && score<C) grade='D';
    if(score<D)             grade='F';
    
   cout<<"Your Grade: "<<grade<<endl;
   
    return 0;
}

