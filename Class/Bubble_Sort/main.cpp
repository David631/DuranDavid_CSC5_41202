/* 
    Author: David Duran
    Created on February 02, 2016, 08:17 AM
    Purpose: To develop a sorting routine called Bubble Sort
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib> //Random Functions
#include <ctime>   //Seeting the seed with time
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void fillAry(int [],int);
void prntAry(int [],int,int);
void bublSrt(int [],int);


// Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=100;
    int array[SIZE];
    
    //Fill the array with random 2 digit numbers
    fillAry(array,SIZE);
    
    //Print the array
    prntAry(array,SIZE,10);
    
    //Test finding the smallest number in the list
    bublSrt(array,SIZE);
            
    //Print the array
    prntAry(array,SIZE,10);
    
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
void fillAry(int a[],int n){
    //loop and fill the array with random numbers
    for(int i=0;i<n;i++){ 
        a[i]=rand()%90+10;//[10,99]
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
void prntAry(int a[],int n,int perLine){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

/******************************************************************************/
/*                                 Bubble Sort                                */
/******************************************************************************/
//Inputs:
// a->list
// n->size of the array
//Outputs:
// a->List initialized with random 2 digit number
void bublSrt(int a[],int n){
    //Outside loop to test if any swaps happen
    bool swap;
    do{
        swap=false;
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
            int temp=a[j];//Exclusive or XOR
            a[j]=a[j+1];//Exclusive or XOR
            a[j+1]=temp;
            swap=true;
            }
        }
    }while(swap);
}