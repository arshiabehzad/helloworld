//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch1Ex5

//Determines wether or not a meeting will have over the amount of allowed people in a room or not

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    //instantiates variables
    int maxCapacity;
    int peopleAttending;
        
    // gets user input for max capacity of the room and people attending the meeting
    cout << "Enter max capacity of a meeting room" << endl;
    cin >> maxCapacity;
    cout << "Enter number of the people in the meeting" << endl;
    cin >> peopleAttending;

    // checks if the number of people attending is smaller than or equal to the max capacity of the room 
    if (peopleAttending <= maxCapacity)
    {
        //tells user the meeting is legal
        cout << "The meeting is legal" <<endl;
    }
    // if the above if statement is not true it will notify the user how many people they need to exclude for the meeting to be legal
    else 
    {
        int excess = peopleAttending - maxCapacity;
        cout << "You need to exclude " << excess << " people" <<endl;
    }
}