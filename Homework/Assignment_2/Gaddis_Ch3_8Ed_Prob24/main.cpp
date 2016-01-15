/* 
    Author: David Duran
    Created on January 14, 2016, 06:28 PM
    Purpose: Word Game
 */

//System Libraries
#include <iostream>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

// Execution Begins Here
int main(int argc, char** argv) {
    
    //Declare and initialize variables
    string name;//Your name
    string age;//Your age
    string city;//Name of City
    string college;//Name of College
    string profssn;//A profession
    string animal;//A type of animal
    string petNme;//A Pets name
    
    //Inputs
    cout<<"His or her name"<<endl;
    cin>>name;
    cout<<"His or her age"<<endl;
    cin>>age;
    cout<<"The name of a city"<<endl;
    cin>>city;
    cout<<"The name of a college"<<endl;
    cin>>college;
    cout<<"A profession"<<endl;
    cin>>profssn;
    cout<<"A type of animal"<<endl;
    cin>>animal;
    cout<<"A pet's name"<<endl;
    cin>>petNme;
    
    //Output the results
    cout<<endl;
    cout<<"There once was a person named "
            <<name<<" who lived in "
            <<city<<" . At the age of "<<endl
            <<age<<", "
            <<name<<" went to college at "
            <<college<<". "
            <<name<<" graduated and went to work as a "<<endl
            <<profssn<<". Then, "
            <<name<<" adopted a(n) "
            <<animal<<" named "
            <<petNme<<". They both lived happily ever after!"<<endl;
    
    //Exit stage right
    return 0;
}
