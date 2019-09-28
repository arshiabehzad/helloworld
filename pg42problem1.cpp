#include <iostream>
#include <string>
using namespace std;

int main(int argc, char** argv)
{
    int weight;

    cout << "enter the weight of the cereal box in ounces" << endl;
    cin >> weight;

    double convertedWeight = weight/35273.92;
    int boxsNeeded = 35273.92/weight;

    cout << "The converted weight is " << convertedWeight << " tons. " << endl;
    cout << "You would need " << boxsNeeded << "cereal boxes to get to a ton" <, endl;
} 