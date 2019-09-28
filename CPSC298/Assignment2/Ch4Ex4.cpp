//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch4Ex4

//Converts feet and inches to meters and centimeters to 

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

// defines variables
int feet;
int inches;
int meterConversion; 
double centimeterRemainder;

bool quit = false;

//defines functions
void input();
void conversion();
void output();

int main(int argc, char **argv)
{
    //runs loop until user says to quit

    while (true)
    {
        input();
        if (quit == true)
        {
            break;
        }
        conversion();
        output();
    }
}

// asks for user input
void input()
{
    cout << "Enter the number of feet(-1 to quit)" << endl;
    cin >> feet;
    if (feet < 0)
    {
        quit = true;
    }
    cout << "Enter the number of inches" << endl;
    cin >> inches;
}

// converts to meters and centimeters
void conversion()
{
   double inchConversion = (feet*12)+inches;
   double centimeterConversion = inchConversion * 2.54;
   meterConversion = (centimeterConversion/100);
   centimeterRemainder = centimeterConversion - (meterConversion*100);
}

// prints out results to user
void output()
{
    cout << "The conversion to meters and centimeters is: " << meterConversion << " m, " << centimeterRemainder << "cm" <<endl;
}