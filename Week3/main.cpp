#include <iostream>

using namespace std;

int main() {
    
    string txtMsg = "";
    
    cout << "Input an abbreviation: ";
    cin  >> txtMsg;
    cout << endl;
    
    if (txtMsg == "LOL") {
        cout << "laughing out loud" << endl;
    }
    else if (txtMsg == "IDK") {
        cout << "I don't know" << endl;
    }
    else if (txtMsg == "BFF") {
        cout << "best friends forever" << endl;
    }
    else if (txtMsg == "IMHO") {
        cout << "in my humble opinion" << endl;
    }
    else if (txtMsg == "TMI") {
        cout << "too much information" << endl;
    }
    else {
        cout << "Unknown" << endl;
    }
    
    return 0;
}