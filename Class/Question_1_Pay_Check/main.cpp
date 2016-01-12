    /* 
        File:   main.cpp
        Author: David Duran
        Created on January 11, 2016, 11:30 AM
        Purpose: Question 2 PayCheck
        Version 2.0
     */
     
    //System Libraries
    #include <iostream>
    using namespace std;
     
    //User Libraries
     
    //Global Constants
     
    //Function prototypes
     
    //Execution Begins Here
    int main(int argc, char** argv) {
        //Declare and initialize variables
        unsigned char ovrTime=40;
        unsigned char payRate=10;
        unsigned short hrsWrkd;
     
        cout<<"Input the Hours Worked for Paycheck"<<endl;
        cin>>hrsWrkd;
     
        //Create Heading
        cout<<"The Hours Worked is "<<static_cast<int>(hrsWrkd)<<"(hrs)"<<endl;
        unsigned short payCheck=(hrsWrkd>=ovrTime)?
                        ovrTime*payRate+(hrsWrkd-ovrTime)*1.5*payRate:
                        hrsWrkd*payRate;
        cout<<"Your Paycheck = $"<<payCheck<<endl;
     
        //Exit stage right
        return 0;
    }

