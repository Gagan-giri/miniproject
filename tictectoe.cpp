#include <iostream>
#include <string>
using namespace std;

int main() {
    char gameboard[3][3] = {
        {' ', ' ', ' '}, 
        {' ', ' ', ' '}, 
        {' ', ' ', ' '}
    };

    const char playerX = 'X';
    const char playerO = 'O';
    char currentPlayer = playerX;
    int row = -1;
    int column = -1;
    char winner = ' ';

    for (int i = 0; i < 9; i++) {
        //print game board
        cout << "   |   |   " << endl;
        cout << " " << gameboard[0][0] << " | " << gameboard[0][1] << " | " << gameboard[0][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << gameboard[1][0] << " | " << gameboard[1][1] << " | " << gameboard[1][2] << endl;
        cout << "___|___|___" << endl;
        cout << "   |   |   " << endl;
        cout << " " << gameboard[2][0] << " | " << gameboard[2][1] << " | " << gameboard[2][2] << endl;
        cout << "   |   |   " << endl;

        if (winner != ' ') {
            break;
        }

        //get player input
        cout << "Current Player is " << currentPlayer << endl;
        while (true) {
            cout << "Enter r c from 0-2 for row and column: ";
            cin >> row >> column;
            if (row < 0 || row > 2 || column < 0 || column> 2) {
                cout << "Invalid input, try again." << endl;
            }
            else if (gameboard[row][column] != ' ') {
                cout << "Tile is full, try again." << endl;
            }
            else {
                break;
            }
            //reset values
            row = -1;
            column = -1;
            cin.clear(); //clear error flags
            cin.ignore(10000, '\n'); //discard values 
        }
        gameboard[row][column] = currentPlayer;
        currentPlayer = (currentPlayer == playerX) ? playerO : playerX;

        //check winners

        //rows - horizontal
        for (int row = 0; row < 3; row++) {
            if (gameboard[row][0] != ' ' && gameboard[row][0] == gameboard[row][1] && gameboard[row][1] == gameboard[row][2]) {
                winner = gameboard[row][0];
                break;
            }
        }
        //columns - vertical
        for (int column = 0; column< 3; column++) {
            if (gameboard[0][column] != ' ' && gameboard[0][column] == gameboard[1][column] && gameboard[1][column] == gameboard[2][column]) {
                winner = gameboard[0][column];
                break;
            }
        }
        //diagonal
        if (gameboard[0][0] != ' ' && gameboard[0][0] == gameboard[1][1] && gameboard[1][1] == gameboard[2][2]) {
            winner = gameboard[0][0];
        }
        else if (gameboard[0][2] != ' ' && gameboard[0][2] == gameboard[1][1] && gameboard[1][1] == gameboard[2][0]) {
            winner = gameboard[0][2];
        }
    }

    if (winner != ' ') {
        cout << "Player" << winner << " is the winner!" << endl;
    }
    else {
        cout << "Tie!" << endl;
    }
}