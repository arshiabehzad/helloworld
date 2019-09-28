//Arshia Behzad
//2320643
//behzad@chapman.edu
//CPSC 298 C++
//Ch5Ex2

//Deletes repeats in an array

#include <iostream>
#include <string>
using namespace std;

char * deleteRepeats(char a[], int& size);

int main(int argc, char **argv)
{
    // creates array
    char a[10];
    a[0] = 'a';
    a[1] = 'b';
    a[2] = 'a';
    a[3] = 'c';
    int size = 4;
    char newArray[10];

    //runs function
    newArray = deleteRepeats(a, size);
    // prints out array
    for (int i = 0; i < size; i++)
    {
        cout << newArray[i];
    }
    
}

char * deleteRepeats(char a[], int& size )
{
    int counter;
    //for loop goes through the array
    for (int i = 0; i < size; i++)
    {
        // for loop to check for duplicates
        for (int j = 0; j < size; j++)
        {
            //determines if there is a duplicate
            if (a[i] == a[j] && i != j)
            {
                // last two for loops are for overwriting the duplicate and shifting the array
                for (int k = j; k < (size - j); k++)
                {
                    for (int l = k+1; l < (size - j -1); l++ )
                    {
                        a[k] = a[l];
                    }
                }
                size--;
            }
            
        }
    }
    return a;
}
