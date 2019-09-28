//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch1Ex1

//Caculates weight of cereal box in tons, and how many boxes needed to make a ton of cereal

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    // instantiates variable weight
    int weight;

    //gets user input for the weight
    cout << "enter the weight of the cereal box in ounces" << endl;
    cin >> weight;

    // calculates the weight in tons
    double convertedWeight = weight/35273.92;
    //calculates how many boxes needed 
    int boxsNeeded = 35273.92/weight;

    //prints out result to user
    cout << "The converted weight is " << convertedWeight << " tons. " << endl;
    cout << "You would need " << boxsNeeded << "cereal boxes to get to a ton" <, endl;
} 