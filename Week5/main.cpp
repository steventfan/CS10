#include <iostream>

using namespace std;

int main() {
    int trunkHeight = 0;
    int trunkWidth = 0;
    int leavesWidth = 0;
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int m = 0;
    int n = 0;
    
    cout << "Enter trunk height: ";
    cin >> trunkHeight;
    cout << "Enter trunk width: ";
    cin >> trunkWidth;
    while ( (trunkWidth % 2) == 0) {
        cout << "Please enter an odd number for the width: ";
        cin >> trunkWidth;
    }
    cout << "Enter leaves width: ";
    cin >> leavesWidth;
    while ( (leavesWidth % 2) == 0) {
        cout << "Please enter an odd number for the width: ";
        cin >> leavesWidth;
    }
    cout << endl;
    
    i = 1;
    while (i <= ( (leavesWidth / 2) + 1) ) {
        j = 1;
        while (j <= (leavesWidth / 2) - i + 1) {
            cout << " ";
            ++j;
        }
        k = 1;
        while (k < (2 * i) ) {
            cout << "*";
            ++k;
        }
        cout << endl;
        ++i;
    }
    
    l = 1;
    while (l <= trunkHeight) {
        m = 1;
        while (m <= ( (leavesWidth - trunkWidth) / 2) ) {
            cout << " ";
            ++m;
        }
        n = 1;
        while (n <= trunkWidth) {
            cout << "*";
            ++n;
        }
        cout << endl;
        ++l;
    }
    
    return 0;
}