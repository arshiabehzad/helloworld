//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch6Ex2

//CounterType assignment

#include <iostream>
#include <string>
using namespace std;

class CounterType
{
    private:
        int m_counter = 0;

    public:
        //setters
        void setCounter(int counter);

        //getters
       int getCounter(); 

        //functions
        void increaseCounter();
        void decreaseCounter();
};


int main(int argc, char **argv)
{
    //testing functions
    CounterType c;
    c.setCounter(1);
    cout << c.getCounter() << endl;
    c.increaseCounter();
    cout << c.getCounter() << endl;
    c.decreaseCounter();
    cout << c.getCounter() << endl;
}

// setter
void CounterType::setCounter(int counter)
{
    if (counter >= 0)
    {
        m_counter = counter;
    }
}

//getter
int CounterType::getCounter()
{
    return m_counter;
}

//increases counter by 1
void CounterType::increaseCounter()
{
    m_counter++;
}

//decreases counter by 1
void CounterType::decreaseCounter()
{
    m_counter--;
}