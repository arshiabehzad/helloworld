//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch2Ex6

//Determines wether or not a cylinder will float in water

//allows the use of math defines and easy acess to the number pi
#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    // defines variables and constants
    const double specificWeightOfWater = 62.4;
    int weightOfSphere ;
    int radius;
    
    // gets user input on weight and radius of the sphere
    cout << "What is the weight of the sphere?" << endl;
    cin >> weightOfSphere;
    cout  << "What is the radius of the sphere?" << endl;
    cin >> radius;

    // calculates volume of the sphere
    double volume = (4/3)* M_PI * radius * radius * radius;
    // calculates the bouyant force 
    double bouyantForce = volume * specificWeightOfWater;
    // checks if bouyant force is greater than the weight of the sphere
    if (bouyantForce >= weightOfSphere)
    {
        //tells the user the sphere will float
        cout << "The sphere will float" << endl;
    }
    // if the above if statement is not true it will tell the user the sphere sinks
    else
    {
        cout << "The sphere will sink" << endl;
    }


}