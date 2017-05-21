#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PLAYER1 = 0;
const int PLAYER2 = 1;
const int WINNING_SCORE = 100;

void printIntro() {
    cout << "Welcome to the dice game Pig!" << endl;
    cout << "The objective is to be first to score 100 points." << endl << endl;
    
    return;
}

int humanTurn(string playerName, int playerScore) {
    int tempScore = 0;
    int diceNum = 0;
    int turnResult = 0;
    char turnDecide = '_';
    
    tempScore = playerScore;
    
    do {
        diceNum = (rand() % 6);
        diceNum = diceNum + 1;
        
        cout << playerName << endl;
        cout << "You rolled a " << diceNum;
            if (diceNum == 1) {
                tempScore = 0;
            
                cout << " (PIG!)" << endl;
                cout << "Your turn is over" << endl;
                cout << "Your score: " << playerScore << endl;
            
                turnResult = 1;
            }
            else {
                tempScore = tempScore + diceNum;
                cout << endl;
                cout << "Your score: " << tempScore << endl;
                if (tempScore < 100) {
                    cout << "Do you want to roll again? (y/n): ";
                    cin >> turnDecide;
                    if (turnDecide == 'y') {
                        turnResult = 0;
                    }
                    else {
                        turnResult = 1;
                    }
                }
                else {
                    turnResult = 1;
                }
            }
            cout << endl;
    } while (turnResult == 0);
    
    if (tempScore != 0) {
        playerScore = tempScore;
    }
    
    return playerScore;
}

int main() {

    int turn = PLAYER1;
    int player1score = 0;
    int player2score = 0;
    string player1name;
    string player2name;
    
    srand(4444);

    printIntro();

    cout << "Player 1 - Enter your name: ";
    cin >> player1name;
    cout << endl;
    cout << "Player 2 - Enter your name: ";
    cin >> player2name;
    cout << endl;

    while (player1score < WINNING_SCORE && player2score < WINNING_SCORE) {

        if (turn == PLAYER1) {
            player1score = humanTurn(player1name, player1score);
        }
        else {
            player2score = humanTurn(player2name, player2score);
        }
        if (turn == PLAYER1) {
            turn = PLAYER2;
        }
        else {
            turn = PLAYER1;
        }
    }

    if (player1score >= WINNING_SCORE) {
        cout << player1name << " wins!" << endl;
    }
    else {
        cout << player2name << " wins!" << endl;
    }

    return 0;
}