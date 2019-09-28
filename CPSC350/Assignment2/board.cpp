#include <iostream>
#include <fstream>
#include <string.h>
#include "board.h"
#include <time.h>

using namespace std;

char **boardArray; 

board::board() 
{

}

// sets up board by opening a file 
board::board(string filename)
{
    // opens file
    ifstream mapFile;
    string line;
    mapFile.open(filename);
    //string row/column variables
    string sRow = "";
    string sColumn = "";
    //gets first two lines and stores them as row and column
    getline(mapFile, sRow);
    getline(mapFile, sColumn);
    //converts to integer
    int row = stoi(sRow);
    int col = stoi(sColumn);
    cout << row << "x" << col <<endl;
    //dynamically creates 2d array 
    boardArray = new char *[row];
    for (int i = 0; i < row; i++)
        boardArray[i] = new char[col];
    int rowCounter = 0;
    int colCounter = 0;
    //goes through file and adds each element of the grid to the array
    while (getline(mapFile, line))
    {
        for (int i = 0; i < line.length(); i++){
                boardArray[rowCounter][colCounter] = line[i];
                colCounter++;
        }
        rowCounter++;
        colCounter = 0;
    }

    
    for (int i = 0; i < row; i++)
    {
        for (int k = 0; k < col; k++){
            cout << boardArray[i][k];
        }
        cout << endl
    }
    mapFile.close();
}

board::board(int row, int column)
{
    
}

board::~board()
{

}

