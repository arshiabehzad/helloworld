//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch2Ex4

// Finds all the prime numbers between 3 and 100

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    // instantiates bool variable
    bool isPrime = true ;
    cout << "The prime numbers between 3 and 100 are ";
    //loops through numbers 3 to 99 
    for (int i = 3; i < 100; i++)
    {
        //loops through numbers 2 to i
        for (int j = 2; j<i; j++)
        {
            // checks to see if i is divisible by j 
            if (i%j == 0)
            {
                // sets the isPrime bool to fale and breaks the loop
                isPrime = false;
                break;
            }
        }
        // checks if the bool isPrime is true 
        if (isPrime)
        {
            //prints out the number to the user as it is a prime number
            cout << i << ", ";
        }
        //resets the bool
        isPrime = true;
    }
    // ends line and adds a period
    cout << "." << endl;
}