#include <iostream>
using namespace std;

void multiply(double mulNum1, double mulNum2, double& product) {
    product = mulNum1 * mulNum2;
    
    return;
}

void divide(double divNum1, double divNum2, double& quotient) {
    quotient = divNum1 / divNum2;
    
    return;
}

int main() {
    double num1 = 0.0;
    double num2 = 0.0;
    double prod = 0.0;
    double quot = 0.0;

    cout << "Enter the first floating point number: ";
    cin >> num1;
    cout << endl;
    cout << "Enter the second floating point number: ";
    cin >> num2;
    cout << endl << endl;
    
    cout << "First floating point number: " << num1 << endl;
    cout << "Second floating point number: " << num2 << endl << endl;

    multiply(num1, num2, prod);
    
    divide(num1, num2, quot);
    
    cout << num1 << " * " << num2 << " = " << prod << endl;
    cout << num1 << " / " << num2 << " = " << quot << endl;

    return 0;
}