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
int getLgth(int);
int getWdth(int);
int getArea(int,int,int);
void dsplDat(float,float,float);
// Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    float length,width,area;
    
    //Input data
    cout<<"Input Length of Rectangle"<<endl;
    cin>>length;
    cout<<"Input Width of Rectangle"<<endl;
    cin>>width;
    
    
    //Output the results
    dsplDat(length,width,area);
    
    //Exit stage right
    return 0;
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