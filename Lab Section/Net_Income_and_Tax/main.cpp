/* 
    Author: David Duran
    Created on January 13, 2016, 11:30 AM
    Purpose: Net income and tax
 *  Version: 2.0
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    float income;
    float tax1, tax2, tax3, tax4, tax5, tax6, tax7, tax8;
    float ntncome;
    
    cout<<"Insert Income"<<endl;
    cin>>income;
    
    tax1=0;        //Tax at 0%
    tax2=5000*0.1; //Tax at 10%
    tax3=5000*0.15;//Tax at 15%
    tax4=5000*0.2; //Tax at 20%
    tax5=5000*0.25;//Tax at 25%
    tax6=5000*0.3; //Tax at 30%
    tax7=5000*0.35;//Tax at 35%
    tax8=5000*0.4; //Tax at 40%
    
    if (income<=5000){//Income between 0-5000 Dollars  
        ntncome=income-tax1;
        cout<<"The tax is= $"       <<tax1<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }    
    else if (income<=10000){//Income between 5001-10000 Dollars   
        ntncome=income-tax2-tax1;
        cout<<"The tax is= $"       <<tax2<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }   
    else if(income<=15000){//Income between 10001-15000 Dollars    
        ntncome=income-tax3-tax2;
        cout<<"The tax is= $"       <<tax3<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }    
    else if(income<=20000){//Income between 15001-20000 Dollars
        ntncome=income-tax4-tax3-tax2;
        cout<<"The tax is= $"       <<tax4<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }   
    else if(income<=25000){//Income between 20001-25000 Dollars    
        ntncome=income-tax5-tax4-tax3-tax2;
        cout<<"The tax is= $"       <<tax5<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }    
    else if(income<=30000){//Income between 25001-30000 Dollars    
        ntncome=income-tax6-tax5-tax4-tax3-tax2;
        cout<<"The tax is= $"       <<tax6<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }    
    else if(income<=35000){//Income between 30001-35000 Dollars
        ntncome=income-tax7-tax6-tax5-tax4-tax3-tax2;
        cout<<"The tax is= $"       <<tax7<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }
    else if(income<=40000){//Income between 35001-40000 Dollars    
        ntncome=income-tax8-tax7-tax6-tax5-tax4-tax3-tax2;
        cout<<"The tax is= $"       <<tax8<<endl;
        cout<<"The net income is= $"<<ntncome<<endl;
    }
          
    return 0;
}
