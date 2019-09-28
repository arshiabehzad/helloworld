//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch6Ex4

//GasPump assignment

#include <iostream>
#include <string>
using namespace std;

bool dispense = true;

class GasPump
{
  public:

    // member variables
    int mAmountDispensed;
    int mAmountCharged;
    double mCostPerGallon;

    //member functions
    void resetValues();
    void dispenseFuel();
    void stopDispensing();
};

int main(int argc, char **argv)
{
    // tests if functions works
    GasPump g1;
    g1.resetValues();
    while (dispense == true)
    {
        g1.dispenseFuel();
        cout << g1.mAmountDispensed;
        if (g1.mAmountDispensed >= 10)
        {
            g1.stopDispensing();
        }
    }
    cout << "Final Amount Dipsensed: " << g1.mAmountDispensed << endl;
    cout << "Final Amount Charged: " << g1.mAmountCharged << endl;
    cout << "Cost Per Gallon: " << g1.mCostPerGallon << endl;
}

// resets values of member variables
void GasPump::resetValues()
{
    mAmountDispensed = 0;
    mAmountCharged = 0;
    mCostPerGallon = 0;
}

// dispenses fuel and keeps track of it
void GasPump::dispenseFuel()
{
    mAmountDispensed++;
    mAmountCharged+=2;
    mCostPerGallon = mAmountCharged/mAmountDispensed;
}

// stops dispensing by setting bool to false
void GasPump::stopDispensing()
{
    dispense = false;
}