#include "stackEx.h"
#include <iostream>

using namepsace std;

stackEx::stackEx() //default constructor
{
    //initializing default values 
    myArray = new char[128];
    size = 128;
    top = -1;
}

stackEx::stackEx(int maxSize)
{
    myArray = new char[maxSize];
    size = maxSize;
    top = -1;
}

stackEx::~stackEx()
{
    delete myArray;
}

void stackEx:: push(char d)
{
    //error/boundary check
    myArray[++top] = d;
}

void StackEx:: pop()
{
    return myArray[top--];
}

void StackEx::peek()
{
    return myArray[top];
}

bool StackEX::isFull()
{
    return (top == size-1);
}

bool StackEx::isEmpty()
{
    return (top == -1);
}