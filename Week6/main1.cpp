#include <iostream>
#include <cstdlib>

using namespace std;

double percentHeads(int numTosses) {
    int i = 0;
    int j = 0;
    int numHeads = 0;
    double percent = 0;
    
    srand(4444);
    
    for (i = 1; i <= numTosses; ++i) {
        j = rand() % 2;
            if (j == 0) {
                ++numHeads;
            }
    }
    
    percent = (static_cast<double>(numHeads) / static_cast<double>(numTosses) ) * 100.0;
    
    return percent;
}
int main() {
    int numToss = 0;
    
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> numToss;
    cout << endl;
    
    cout << "Heads came up " << percentHeads(numToss) << "% of the time." << endl;
    
    return 0;
}