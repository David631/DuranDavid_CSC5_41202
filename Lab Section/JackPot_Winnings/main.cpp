/* 
    Author: David Duran
    Created on January 11, 2016, 10:38 AM
    Purpose: Jackpot Winnings
 *  Version 1.0
 */

//User Library
#include <iostream>
using namespace std;

//Main
int main(int argc, char** argv) {
    
    // Declare
    float LUMPSUM=.62f;
    float TAXRDCT=.52F;
    float MRRGERE=.5F;
    long int JACKPOT=1.3e9f;
    long int jPot,jPot2,jPot3;
	
    //
    jPot=JACKPOT*LUMPSUM;
    jPot2=jPot*TAXRDCT;
    jPot3=jPot2*MRRGERE;
    
    //
    cout<<"Jackpot Total= $"<<JACKPOT<<endl;
    cout<<"The Sum of the Jackpot After Tax= $"<<jPot<<endl;
    cout<<"The Sum of the Jackpot after Marriage Reduction= $"<<jPot2<<endl;
  
    //Exit
    return 0;
}
