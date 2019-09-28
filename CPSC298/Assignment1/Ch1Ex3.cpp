//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch1Ex3

//Calculates annual salary and monthly salary

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    // instantiates salary variable
    int salary;

    // gets user input for salary
    cout << "What is your salary?" << endl;
    cin >> salary;
    
    //calculates annual salary
    int annualSalary = (1.076*(salary/2)) + (salary/2);
    //calculates monthly salary
    int monthlySalary = annualSalary/12;

    //outputs results to user
    cout << "The new annual salary is " << annualSalary << endl;
    cout << "The monthly salary is " << monthlySalary << endl;

}