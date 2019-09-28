#include <iostream>

class GenQueue
{
    public:
        GenQueue();
        GenQueue(int maxSize);
        ~GenQueue();

        //core functions
        void insert(char d);
        char remove();

        //aux functions
        char peek();
        bool isFull();
        bool isEmpty();
        int getSize();

        //vars
        int head; //aka front 
        int rear; //aka tail
        int size; 
        int numElements;  

        char *myQueue; // array
};