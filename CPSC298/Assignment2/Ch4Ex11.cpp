//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch4Ex11

//Simulates the choose a door activity

#include <iostream>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

int main(int argc, char **argv)
{
    // makes a seed for a random number
    srand(time(NULL));

    // defines variables
    int prize = rand() % 3 + 1;
    int userAnswer;
    int revealedDoor;
    int change;

    // asks for user input
    cout << "Choose Door 1, 2, or 3 for a chance at $1,000,000!" << endl;
    cin >> userAnswer;

    // determines which door to reveal to the user
    if (userAnswer != prize )
    {
        for (int i = 1; i <=3; i++)
        {
            if (i != userAnswer && i != prize)
            {
                revealedDoor = i;
            }
        }
    }
    else 
    {
        if (userAnswer == 1)
        {
            revealedDoor = 2;
        }
        else if (userAnswer == 2)
        {
            revealedDoor = 3;
        }
        else
        {
            revealedDoor = 1;
        }
    }

    // asks user if they want to change their decision
    cout << "Before we show you if you won. Let me reveal that "<< revealedDoor << " does not have the prize" << endl;
    cout << "Would you like to change your choice? (1 - yes, 2 - no)" <<endl;
    cin >> change;
    //tells user if they won or not
    if (change == 1)
    {
        cout << "What door would you like to choose?" << endl;
        cin >> userAnswer;
    }
    if (userAnswer == prize)
    {
        cout << "Congragulations you win 1 million dollars!!!";
    }
    else 
    {
        cout << "I'm sorry you lost. Door " << prize << " had the prize money" << endl;
    }
}