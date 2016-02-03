/* 
    File:   main.cpp
    Author: David Duran
    Created on February 03, 2016, 08:20 AM
    Purpose: Rectangle Area--Complete the Program
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float getSale(float,float,float,float);
void fndHigh(float &,float &,float &,float &);
// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float ne,nw,se,sw;
    
    
    //Input data

    
    //Output the results
    getSale(ne,nw,se,sw);
    fndHigh(ne,nw,se,sw);
    
    //Exit stage right
    return 0;
}
/******************************************************************************/
/*                                 Get Length                                 */
/******************************************************************************/
float getSale(float ne,float nw,float se,float sw){
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
void fndHigh(float &ne,float &nw,float &se,float &sw){
    if(ne>nw&&ne>se&&ne>sw){
        cout<<"Highest Sales is: NorthEast"<<endl;
        cout<<"Sales Figure: "<<ne<<endl;
    }else if(nw>ne&&nw>se&&nw>sw){
        cout<<"Highest Sales is: NorthWest"<<endl;
        cout<<"Sales Figure: "<<nw<<endl;
    }else if(se>nw&&se>ne&&se>sw){
        cout<<"Highest Sales is: SouthEast"<<endl;
        cout<<"Sales Figure: "<<se<<endl;
    }else if(sw>nw&&sw>se&&sw>ne){
        cout<<"Highest Sales is: SouthWest"<<endl;
        cout<<"Sales Figure: "<<sw<<endl;
    }else{
        cout<<"Unable to Determine Highest Sales"<<endl;
    }
}