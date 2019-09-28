//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch7Ex3

//Counter assignment;

#include <iostream>
#include <string>
using namespace std;

// creates counter class
class Counter
{
    public:

        // member variables
        int mcounter;
        int mMax;

        // constructor
        Counter(int max);

        //member functions
        void reset();
        void incr1();
        void incr10();
        void incr100();
        void incr1000();

        bool overflow(int calculation);

};

int main(int argc, char **argv)
{
}

//constructor
Counter::Counter(int max)
{
    mcounter = 0;
    mMax = max;
}

// resets counter;
void Counter::reset()
{
    mcounter = 0;
}

// increments counter in ones place
void Counter::incr1()
{
    int calculation = mcounter + 1;
    if (overflow(calculation) == false)
    {
        mcounter = calculation;
    }
}

// increments counter in tens place
void Counter::incr10()
{
    int calculation = mcounter + 10;
    if (overflow(calculation) == false)
    {
        mcounter = calculation;
    }
}

// increments counter in hundreds place
void Counter::incr100()
{
    int calculation = mcounter + 100;
    if (overflow(calculation) == false)
    {
        mcounter = calculation;
    }
}

// increments counter in thousands place
void Counter::incr1000()
{
    int calculation = mcounter + 1000;
    if (overflow(calculation) == false)
    {
        mcounter = calculation;
    }
}

// checks if the counter is about to overflow
bool Counter::overflow(int calculation)
{
    if (calculation < mMax)
    {
        return true;
    }
    return false;
}