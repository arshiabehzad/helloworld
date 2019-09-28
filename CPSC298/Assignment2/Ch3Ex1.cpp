//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch3Ex1

//Calculates miles per gallon and displays results to the user

#include <iostream>
#include <string>
using namespace std;

const double literToGallons = 0.264179;

double milesPerGallon(double litersOfGasoline, double milesTraveled);

int main(int argc, char **argv)
{
    // defines variables
    double litersOfGasoline;
    double milesTraveled;

    //loops until user decides to quit
    while (true)
    {
        cout << "Enter the number of liters of gasoline consumed by your car (-1 to quit)"<<endl;
        cin >> litersOfGasoline;
        if (litersOfGasoline < 0)
        {
            break;
        }
        cout << "Enter the number of miles traveled by your car "<<endl;
        cin >> milesTraveled;

        // runs function to calculate miles per gallon
        double answer = milesPerGallon(litersOfGasoline, milesTraveled);
        cout << "Your miles per gallon is: " <<answer <<endl;
        
    }

}

//calculates miles per gallon
double milesPerGallon(double litersOfGasoline, double milesTraveled)
{
    double gallons = litersOfGasoline * literToGallons;
    double result = (milesTraveled / gallons);
    return result;
}