/* 
    Author: David Duran
    Created on February 02, 2016, 08:17 AM
    Purpose: How big of an X do you want to print
 */

//System Libraries
#include <iostream> //I/O
#include <iomanip>  //Formatting
#include <cstdlib> //Random Functions
#include <ctime>   //Seeting the seed with time
using namespace std;

//User Libraries

//Global Constants
const int COL=50;

//Function Prototypes
int fillAry1(char [][COL],int);
int fillAry2(char [][COL],int);
void prntAry(char [][COL],int,int);
void allnOne();

// Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int ROW=50;
    char array[ROW][COL];
    
    //Fill the array with random 2 digit numbers
    int row_col=fillAry1(array,ROW);
    prntAry(array,ROW,row_col);
    
    row_col=fillAry2(array,ROW);
    
    //Print the array
    prntAry(array,ROW,row_col);
    
    //Print all in one
    allnOne();
    //Exit stage right
    return 0;
}
/******************************************************************************/
/*                                      Void 1                                */
/******************************************************************************/
//Inputs:
// a->A 2 dimensional array
// ROW->Number of rows in the array
// COL->Number of columns in the array
//Outputs:
// a->List initialized with random 2 digit number
int fillAry1(char a[][COL],int ROW){
    //Randomly choose how many rows and columns
    int row_col=rand()%7+2;//[2,50]
    //Fill the entire table with spaces
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            a[row][col]=' ';
        }
    }
    //Fill the back slash part of X
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            if(row==col)a[row][col]=(row_col-row)+48;
        }
    }
    //Fill the back slash part of X
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            if((row+col)==(row_col-1))a[row][col]=(row+1)+48;
        }
    }
    //Send back how many cells are occupied
    return row_col;
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
void prntAry(char a[][COL],int ROW,int rc){
    //loop and fill the array with random numbers
    cout<<endl;
    for(int row=0;row<rc;row++){
        for(int col=0;col<rc;col++){
            cout<<a[row][col];
        }cout<<endl;
    }
    cout<<endl;
}

/******************************************************************************/
/*                                      Void 1                                */
/******************************************************************************/
//Inputs:
// a->A 2 dimensional array
// ROW->Number of rows in the array
// COL->Number of columns in the array
//Outputs:
// a->List initialized with random 2 digit number
int fillAry2(char a[][COL],int ROW){
    //Randomly choose how many rows and columns
    int row_col=rand()%7+2;//[2,50]
    //Fill the entire table with spaces
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            a[row][col]=' ';
            if(row==col)a[row][col]=(row_col-row)+48;
            if((row+col)==(row_col-1))a[row][col]=(row+1)+48;
        }
    }
    //Send back how many cells are occupied
    return row_col;
}

/******************************************************************************/
/*                                      Void 1                                */
/******************************************************************************/
//Inputs:
// a->A 2 dimensional array
// ROW->Number of rows in the array
// COL->Number of columns in the array
//Outputs:
// a->List initialized with random 2 digit number
void allnOne(){
    //Randomly choose how many rows and columns
    int row_col=rand()%51;//[2,50]
    //Fill the entire table with spaces
    for(int row=0;row<row_col;row++){
        for(int col=0;col<row_col;col++){
            if(row==col){cout<<row_col-row;
            }else if((row+col)==(row_col-1)){cout<<row+1;
            }else{cout<<' ';}
        }
    }
}