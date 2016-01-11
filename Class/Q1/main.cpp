/* 
    Author: David Duran
    Created on January 11, 2016, 08:58 AM
    Purpose: Display table and compare swaps
 *  Version 1.0
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool x=true;
    bool y=true;
    int temp,a=2,b=3;
    
    //Create Heading
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y (X^Y)^X !(X&&Y) !X||!Y !(X||Y) "
            "!X&&!Y"<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
    
            
    //Second Row
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
            
    //Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
   
            
    //Fourth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"  ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<<(x^y?'T':'F')<<"    ";
    cout<<((x^y)^y?'T':'F')<<"        ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"      ";
    cout<<(!x||!y?'T':'F')<<"       ";
    cout<<(!(x||y)?'T':'F')<<"      ";
    cout<<(!x&&!y?'T':'F')<<"    "<<endl;
            
    //Swap using temp
    cout<<""<<endl;
    cout<<"Swap using temp"<<endl;
    cout<<"Before Swap: "<<"A="<<a<<" B="<<b<<endl;
    temp=a;a=b;b=temp;
    cout<<"After Swap: "<<"A="<<a<<" B="<<b<<endl;
            
    //Swap using exclusive or operator
    cout<<""<<endl;
    cout<<"Swap using exclusive or operator"<<endl;
    cout<<"Before Swap: "<<"A="<<a<<" B="<<b<<endl;
    a=a^b;b=a^b;a=a^b;
    cout<<"After Swap: "<<"A="<<a<<" B="<<b<<endl;
    
    //Exit stage right
    return 0;
}

