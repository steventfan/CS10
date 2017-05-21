#include <vector>
#include <iostream>

using namespace std;

const bool CLEAR_SCREEN = true;

/// @brief Utilizes an escape character sequence to clear the screen
void clearScreen() {
    cout << endl;

    if (CLEAR_SCREEN) {
        cout << "\033c";
    }

    cout << endl;

    return;
}


/// @brief Draws the provided tic-tac-toe board to the screen
//  @param board is the tic-tac-toe board that should be drawn
void drawBoard(const vector < char >&gameBoard) {
    clearScreen();
    for (int i = 0; i < 9; i += 3) {
        cout << "  " << gameBoard.at(i) << "  |  " << gameBoard.at(i + 1) << "  |  "
            << gameBoard.at(i + 2) << "  " << endl;
        if (i < 6) {
            cout << "-----|-----|-----" << endl;
        }
    }
    cout << endl;

    return;
}



/// @brief Fills vector with characters starting at lower case a.
///
///     If the vector is size 3 then it will have characters a to c.
///     If the vector is size 5 then it will have characters a to e.
///     If the vector is size 26 then it will have characters a to z.
///
/// @param v the vector to initialize
/// @pre-condition the vector size will never be over 26
void initVector(vector <char> &v) {
    int i = 0;
    int j = 0;
    char k = ' ';
    
    j = v.size();
    for (i = 0; i < j; ++i) {
        k = 'a';
        v.at(i) = k + i; 
    }
    // TODO: implement function
    return;
}


/// @brief Converts a character representing a cell to associated vector index
/// @param the position to be converted to a vector index
/// @return the integer index in the vector, should be 0 to (vector size - 1)
int convertPosition(char boardPosition) {
    int vectorIndex = 0;
    if (boardPosition == 'a') {
        vectorIndex = 0;
    }
    else if (boardPosition == 'b') {
        vectorIndex = 1;
    }
    else if (boardPosition == 'c') {
        vectorIndex = 2;
    }
    else if (boardPosition == 'd') {
        vectorIndex = 3;
    }
    else if (boardPosition == 'e') {
        vectorIndex = 4;
    }
    else if (boardPosition == 'f') {
        vectorIndex = 5;
    }
    else if (boardPosition == 'g') {
        vectorIndex = 6;
    }
    else if (boardPosition == 'h') {
        vectorIndex = 7;
    }
    else if (boardPosition == 'i') {
        vectorIndex = 8;
    }
    // TODO: implement function
    return vectorIndex;
}


/// @brief Predicate function to determine if a spot in board is available.
/// @param board the current tic-tac-toe board 
/// @param position is an index into vector to check if available
/// @return true if position's state is available (not marked) AND is in bounds
bool validPlacement(const vector<char>  &gameBoard, int positionIndex) {
    char k = ' ';
    bool testPosition = true;

    testPosition = false;
    k = 'a';
    if (gameBoard.at(positionIndex) == k + positionIndex) {
        testPosition = true;
    }
    else {
        testPosition = false;
    }
    // TODO: implement function
    return testPosition;
}

/// @brief Acquires a play from the user as to where to put her mark
///
///     Utilizes convertPosition and validPlacement functions to convert the
///     user input and then determine if the converted input is a valid play.
///
/// @param board the current tic-tac-toe board 
/// @return an integer index in board vector of a chosen available board spot
int getPlay(const vector<char> &gameBoard) {
    // TODO: implement function
    char boardPosition = ' ';
    int i = 0;
    int vectorIndex = 0;
    bool testIndex = true;
    
    while (i == 0) {
        cout << "Please choose a position: ";
        cin >> boardPosition;
        cout << endl;

        if (boardPosition == 'a' || boardPosition == 'b' || boardPosition == 'c' || boardPosition == 'd' || boardPosition == 'e' || boardPosition == 'f' || boardPosition == 'g' || boardPosition == 'h' || boardPosition == 'i') {
            vectorIndex = convertPosition(boardPosition);
            testIndex = validPlacement(gameBoard, vectorIndex);
                if (testIndex) {
                    i = 1;
                }
                else {
                    i = 0;
                }
        }
        else {
            i = 0;
        }
    }
    return vectorIndex;
}


/// @brief Predicate function to determine if the game has been won
///
///     Winning conditions in tic-tac-toe require three marks from same 
///     player in a single row, column or diagonal.
///
/// @param board the current tic-tac-toe board 
/// @return true if the game has been won, false otherwise
bool gameWon(const vector<char> &gameBoard) {
    int i = 0;
    bool gameStatus = false;
    
    if (gameBoard.at(0) == gameBoard.at(4) && gameBoard.at(0) == gameBoard.at(8) ) {
        gameStatus = true;
    }
    else if (gameBoard.at(2) == gameBoard.at(4) && gameBoard.at(2) == gameBoard.at(6) ) {
        gameStatus = true;
    }
    else {
        for (i = 0; i < 3; ++i) {
            if (gameBoard.at(i) == gameBoard.at(i + 3) && gameBoard.at(i) == gameBoard.at(i + 6) ) {
            gameStatus = true;
            }
        }
        if (gameStatus == false) {
            for (i = 0; i <= 6; i = i + 3) {
                if (gameBoard.at(i) == gameBoard.at(i + 1) && gameBoard.at(i) == gameBoard.at(i + 2) ) {
                    gameStatus = true;
                }
            }
        }
    }
    return gameStatus;
}


/// @brief Predicate function to determine if the board is full
/// @param board the current tic-tac-toe board 
/// @return true iff the board is full (no cell is available)
bool boardFull(const vector<char> &gameBoard) {
    int i = 0;
    int j = 0;
    int k = 0;
    char a = ' ';
    bool tieGameStatus = false;
    
    i = 0;
    j = 0;
    tieGameStatus = false;
    while (i < 9 && j == 0) {
        a = 'a';
        if (gameBoard.at(i) == a + i) {
            j = 1;
            k = 1;
            tieGameStatus = false;
        }
        ++i;
    }
    if (k != 1) {
        tieGameStatus = true;
    }
    // TODO: implement function
    return tieGameStatus;
}


// Global constants for player representation
const int PLAYER1 = 0;
const int PLAYER2 = 1;

int main() {
    // Variables that you may find useful to utilize
    vector<char> gameBoard(9);
    //int curPlay;
    int whosTurn = PLAYER1; // Player 1 always goes first and is 'X'
    int positionIndex = 0;
    //char letter = ' ';
    bool gameStatus = false;
    bool tieGame = false;

    initVector(gameBoard);
    /// TODO: Initialize board to empty state

    drawBoard(gameBoard);
    /// TODO: Display empty board
    while (gameStatus == false && tieGame == false) {
    /// TODO: Play until game is over
        //a = 'letter';
        positionIndex = getPlay(gameBoard);
        /// TODO: Get a play

        if (whosTurn == PLAYER1) {
            gameBoard.at(positionIndex) = 'X';
        }
        else {
            gameBoard.at(positionIndex) = 'O';
        }
        /// TODO: Set the play on the board
        if (whosTurn == PLAYER1) {
            whosTurn = PLAYER2;
        }
        else {
            whosTurn = PLAYER1;
        }
        /// TODO: Switch the turn to the other player

        drawBoard(gameBoard);
        /// TODO: Output the updated board
        gameStatus = gameWon(gameBoard);
        if (gameStatus == false) {
            tieGame = boardFull(gameBoard);
        }
    }
    if (gameStatus == true) {
        if (whosTurn == PLAYER1) {
            cout << "PLAYER 2 WINS!" << endl;
        }
        else {
            cout << "PLAYER 1 WINS!" << endl;
        }
    }
    else {
        cout << "No one wins" << endl;
    }

    /// TODO: Determine winner and output appropriate message
    return 0;
}