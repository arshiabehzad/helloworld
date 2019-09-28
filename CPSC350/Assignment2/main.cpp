#include <iostream>
#include <string.h>
#include <fstream>
#include "board.h"

using namespace std;

int main(int argc, char **argv)
{
    int input;
    
    cout << "1) Read map file \n2) Generate random board" << endl;
    cin >> input;
    if (input == 1)
    {
        string filename;
        cout << "what is the name of the file?" << endl;
        cin >> filename;
        board *b1 = new board(filename);
    }
    else if (input == 2)
    {
        string input = "";
        cout << "what are the dimensions of the board? (ex. 5x5)" << endl;
        cin >> input;
        int delimPos = input.find("x");
        int row = stoi(input.substr(0,delimPos));
        int column = stoi(input.substr(delimPos + 1));
        board *b1 = new board(row, column);
        //cout << "Row: " << row << " Column: " << column << endl;
    }

}