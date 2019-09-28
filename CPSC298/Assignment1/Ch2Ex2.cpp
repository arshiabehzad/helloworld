//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch2Ex2

//Calculates how many months to pay off debt and the interest that will be payed

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    //defining variables and constants
    const double interest = .015;
    const int monthlyPayment = 50;
    int debt = 1000;
    double interestToBePayed;
    double debtToBePayedOff;
    double totalInterest = 0;
    int months = 0;

    //iterates through loop until the debt is payed off 
    while (debt > 0)
    {
        // calculates the amount of interest that will be payed from the 50 dollar monthly payement
        interestToBePayed = debt * interest;
        // calculates the amount of debt that will payed of from the 50 dollar monthly payement
        debtToBePayedOff = monthlyPayment - interestToBePayed;
        //reduces the debt by the amount payed off
        debt -= debtToBePayedOff;
        // adds to the totalInterest that will be payed
        totalInterest += interestToBePayed;
        // adds to the number of months counter
        months++;
    }

    //outputs results to the user
    cout << "It will take " << months << " months to pay of your loan" << endl;
    cout << "You will pay $" << totalInterest << " in interest" <<endl ;
    
}