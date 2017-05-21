#include <iostream>

using namespace std;

int main() {
    
    string player1name = "";
    int player1yards = 0;
    string player2name = "";
    int player2yards = 0;
    string player3name = "";
    int player3yards = 0;
    
    cout << "Enter player 1's name:";
    cin  >> player1name;
    cout << endl;
    cout << "Enter player 1's yards gained:";
    cin  >> player1yards;
    cout << endl;
    
    cout << "Enter player 2's name:";
    cin  >> player2name;
    cout << endl;
    cout << "Enter player 2's yards gained:";
    cin  >> player2yards;
    cout << endl;
    
    cout << "Enter player 3's name:";
    cin  >> player3name;
    cout << endl;
    cout << "Enter player 3's yards gained:";
    cin  >> player3yards;
    cout << endl << endl;
    
    cout << "Player 1 - " << player1name << ": " << player1yards << endl;
    cout << "Player 2 - " << player2name << ": " << player2yards << endl;
    cout << "Player 3 - " << player3name << ": " << player3yards << endl;
    
    if ( (player1yards > player2yards) && (player1yards > player3yards) ) {
        cout << "1. " << player1name << ": " << player1yards << endl;
    }
    else if ( (player2yards > player1yards) && (player2yards > player3yards) ) {
        cout << "1. " << player2name << ": " << player2yards << endl;
    }
    else if ( (player3yards > player1yards) && (player3yards > player2yards) ) {
        cout << "1. " << player3name << ": " << player3yards << endl;
    }
    
    if ( ( (player1yards < player2yards) && (player1yards > player3yards) ) || ( (player1yards > player2yards) && (player1yards < player3yards) ) ) {
        cout << "2. " << player1name << ": " << player1yards << endl;
    }
    else if ( ( (player2yards < player1yards) && (player2yards > player3yards) ) || ( (player2yards > player1yards) && (player2yards < player3yards) ) ) {
        cout << "2. " << player2name << ": " << player2yards << endl;
    }
    else if ( ( (player3yards < player1yards) && (player3yards > player2yards) ) || ( (player3yards > player1yards) && (player3yards < player2yards) ) ) {
        cout << "2. " << player3name << ": " << player3yards << endl;
    }
    
    if ( (player1yards < player2yards) && (player1yards < player3yards) ) {
        cout << "3. " << player1name << ": " << player1yards << endl;
    }
    else if ( (player2yards < player1yards) && (player2yards < player3yards) ) {
        cout << "3. " << player2name << ": " << player2yards << endl;
    }
    else if ( (player3yards < player1yards) && (player3yards < player2yards) ) {
        cout << "3. " << player3name << ": " << player3yards << endl;
    }
    
    return 0;
}