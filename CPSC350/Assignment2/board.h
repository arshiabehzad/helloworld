#include <iostream>

using namespace std;

class board{
    public:
        board();
        board(int row, int columns);
        board(string filename);
        ~board();
       
       char **boardArray;
        
};