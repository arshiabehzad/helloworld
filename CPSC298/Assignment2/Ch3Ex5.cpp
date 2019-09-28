//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch3Ex5

//calculates differnt sizes based on weight, height, and age

#include <iostream>
#include <string>
using namespace std;

//defines functions

double hatSize(int weight, int height);
double jacketSize(int weight, int height, int age);
double waistInInches(int weight, int age);

int main(int argc, char **argv)
{
    // defines variables
    int height;
    int weight;
    int age;

    // runs loop until user choses to exit
    while (true)
    {
        // asks for user input
        cout << "What is your height? (-1 to quit)" << endl;
        cin >> height;

        if (height < 0)
        {
            break;
        }

        cout << "What is your weight?" << endl;
        cin >> weight;

        cout << "What is your age?" << endl;
        cin >> age;

        // displays results to user by calling functions and then printing
        cout << "Your hat size is: " << hatSize(weight, height) << endl;
        cout << "Your jacket size is: " << jacketSize(weight, height, age) << endl;
        cout << "Your waist size is: " << waistInInches(weight, age) << endl;
    }
}


// calculates hat size
double hatSize(int weight, int height)
{
    return (weight/height)*2.9;
}


// calculates jacket size
double jacketSize(int weight, int height, int age)
{
    double firstCalculation = (weight * height)/288;
    int adjustment = (age/10);
    double adjustment2 = adjustment * .125;
    return firstCalculation + adjustment2;
}

// calculates waist length
double waistInInches(int weight, int age)
{
    double adjustment = 0;
    double firstCalculation = weight/5.7;
    if (age > 28)
    {
        if (age % 2 == 0)
        {
             adjustment = (age/2)* 0.1;
        }
    }
    return firstCalculation + adjustment;
}