#include <iostream>

using namespace std;

class stackEx
{
    public:
        stackEX(); //constructor
        stackEx(int maxSize); //overload constructor
        ~stackEx(); //destructor

        void push(char d);
        char pop();
        char peek();

        bool isFull();
        bool isEmpty();

        int size;
        int top;

        char *myArray;
}