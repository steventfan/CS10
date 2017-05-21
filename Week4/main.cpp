#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string textInput = "";
    
    cout << "Enter text: ";
    getline(cin, textInput);
    cout << endl;
    
    cout << "You entered: " << textInput << endl;
    
    if (textInput.find("BFF") != string::npos) {
        cout << "BFF: best friend forever" << endl;
    }
    if (textInput.find("IDK") != string::npos) {
        cout << "IDK: I don't know" << endl;
    }
    if (textInput.find("JK") != string::npos) {
        cout << "JK: just kidding" << endl;
    }
    if (textInput.find("TMI") != string::npos) {
        cout << "TMI: too much information" << endl;
    }
    if (textInput.find("TTYL") != string::npos) {
        cout << "TTYL: talk to you later" << endl;
    }
    
    return 0;
}