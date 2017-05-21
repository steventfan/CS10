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
        textInput.replace(textInput.find("BFF"), 3, "best friend forever");
    }
    if (textInput.find("IDK") != string::npos) {
        textInput.replace(textInput.find("IDK"), 3, "I don't know");
    }
    if (textInput.find("JK") != string::npos) {
        textInput.replace(textInput.find("JK"), 2, "just kidding");
    }
    if (textInput.find("TMI") != string::npos) {
        textInput.replace(textInput.find("TMI"), 3, "too much information");
    }
    if (textInput.find("TTYL") != string::npos) {
        textInput.replace(textInput.find("TTYL"), 4, "talk to you later");
    }
    
    cout << "Expanded: " << textInput << endl;
    
    return 0;
}