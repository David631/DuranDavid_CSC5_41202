/* 
    File:   main.cpp
    Author: David Duran
    Created on January 25, 2016, 11:06 AM
    Purpose: Craps Simple Game
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

//prototypes

int main(int argc, char** argv){
    //Declare Variables
       char keepPlaying = 'n'; //loop control variable

       do {
              play21();
          
              //keep playing?
             cout << "Do you want to play another hand (y/n)?";
             cin >> keepPlaying;
     } while(keepPlaying == 'Y' || keepPlaying == 'y');


        //play one hand of 21

        //randomize the cards
        srand((int) time(0));

       // deal the cards
         int person = dealCards(2, "Your Cards:");
         cout << " = " << person << endl;
         int house = dealCards(2, "Computers Cards:");
         cout << " = " << house << endl;

        // Ask if human wants a hit and keep hitting...
        hit(person);
        cout << endl;

       //Determine if computer takes a hit
       while ((house < person) && (house <= 21) && (person <= 21))
	   {
               house += dealCards(1, "The Computer takes a card ");
               cout << endl;
        }

       //show who won....
       determineWinner(person, house);


//Compare the scores to see who won
		if (humanScore == 21)
			cout << "You have 21. You win!" << endl;
		else if ((humanScore < 21) && (humanScore > houseScore))
			cout << "You have the closer hand to 21. You win!" << endl;
		else 
			cout << "The computer wins, sorry try again." << endl;

	
	int return_value = 0;
	int value = 0;

	for (int a = 0; a <= numberOfCards; a++)
	{
		
		
		int cards = a; 
		while(cards--)
			{
				value = Random(0,10); 
				cout << value << " "; 
				if(cards) 
					cout << " , ";
				return_value += value;
				}
        }



	int cardCount = 0;
	char wantCard = "y" || "n";
	int cardTotal = 0;
	cardTotal = playerScore;
	cout << "Would you like another card?"; 
	while (wantCard == 'Y' || wantCard == 'y')
	{
		if ((cardTotal > 0 ) && (cardTotal < 21))
		cardCount += 1;
		cardTotal += Random(0,10); 
		cout << "Your total is: " << cardTotal;
		cout << "Do you want another card?";
		cin >> wantCard;
		if (wantCard == 'Y' || wantCard == 'y')
			cout << cardTotal + dealCards(1, "You take a card."); // adds humanScore to dealCard()
		else 
			cout << "You decide to stand";
			
		if (cardTotal > 21) 
			cout << "You have gone over 21, You Lose";
	}

		



//returns a random number within the given boundary
	return 1 + rand() % (upperLimit - lowerLimit + 1);
        return 0;
}