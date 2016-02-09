/* 
    Author: David Duran
    Created on February 02, 2016, 08:17 AM
    Purpose: To develop a sorting routine called Mark Sort
 *           using dynamic memory and a structure
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib> //Random Functions
#include <ctime>   //Seeting the seed with time
using namespace std;

//User Libraries
#include "Array.h"

//Global Constants

//Function Prototypes
void fillAry(Array &);
void prntAry(Array &,int);
void markSrt(Array &);


// Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables and initialize the size
    Array array;
    array.size=100;
    array.data=new int[array.size];
    
    //Fill the array with random 2 digit numbers
    fillAry(array);
    
    //Print the array
    prntAry(array,10);
    
    //Test finding the smallest number in the list
    markSrt(array);
            
    //Print the array
    prntAry(array,10);
    
    //Reallocate memory
    delete []array.data;
    
    //Exit stage right
    return 0;
}
/******************************************************************************/
/*                                      Void 1                                */
/******************************************************************************/
//Inputs:
// a->list
// n->size of the array
//Outputs:
// a->List initialized with random 2 digit number
void fillAry(Array &a){
    //loop and fill the array with random numbers
    for(int i=0;i<a.size;i++){ 
        a.data[i]=rand()%90+10;//[10,99]
    }
}

/******************************************************************************/
/*                                      Void 2                                */
/******************************************************************************/
//Inputs:
// a->list
// n->size of the array
//perLine 
//Outputs:
// a->Printed List
void prntAry(Array &a,int perLine){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<a.size;i++){
        cout<<a.data[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

/******************************************************************************/
/*                                      Mark Sort                             */
/******************************************************************************/
//Inputs:
// a->list
// n->size of the array
//Outputs:
// a->List initialized with random 2 digit number
void markSrt(Array &a){
    //loop and fill the array with random numbers
    for(int i=0;i<a.size-1;i++){ 
        for(int j=i+1;j<a.size;j++){
            if(a.data[i]>a.data[j]){
            int temp =a.data[j];
                a.data[j]=a.data[i];
                a.data[i]=temp;
            }
        }
    }
}