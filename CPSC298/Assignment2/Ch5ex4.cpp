//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch5Ex4

//Counts number of elements in array

#include <iostream>
#include <string>
#include <array>
using namespace std;

//defineines  functions
void arrayOutput(int array[]);

int main(int argc, char **argv)
{
    //tests function
    int a[5] = {1, 3, 3, 2, 5};
    arrayOutput(a);
}

// outputs the count
void arrayOutput(int array[]){
    int counter = 0;
    cout << "N Count" << endl;
    // goes through the two loops comparing and counting anytime there is another one of the same elemenet
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j< 5; j++)
        {
            if (array[i] == array[j])
            {
                counter++;
            }
        }
        //displays results
        cout << array[i] << " " << counter << endl;
    }
}