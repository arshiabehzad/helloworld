#include <iostream>
#include <string>
using namespace std;

int addTwoNumbers(int num1, int num2);

int main(int argc, char** argv)
{
    int userInput;
    int userInput2;

    cout <<"enter number 1" << endl;
    cin >> userInput;

    cout << "enter number 2" << endl;
    cin >> userInput2;

    int sum = addTwoNUmbers(userInput, userInput2);
    cout << "the sum of number1 & 2 is " << sum << endl;

    return 0;
}

int addTwoNumbers(int num1, int num2)
{
    return num1 + num2
}