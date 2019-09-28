#include "stackEX.h"
#include <iostream>

using namespace std;

int main (int argc, char ** argv)
{
    StackEx myStack(10);

    myStack.push('R');
    myStack.push('e');
    myStack.push('n');
    myStack.push('e');

    cout << "popping: " << myStack.pop() << endl;
    cout << "peek-a-boo :" << myStack.peek() << endl;

    myStack.push('F');
    cout << "peek-a-boo :" << myStack.peek() << endl;

    while(!myStack.isEmpty()){
        cout<< "popping: "<<myStack.pop() <<endl;
    }
    return 0; 

}