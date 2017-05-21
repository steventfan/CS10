#include <iostream>
using namespace std;

int add(int x, int y) {
    int z = 0;
    
    z = x + y;
    
    return z;
}

int subtract(int x, int y) {
    int z = 0;
    
    z = x - y;
    
    return z;
}

int main() {
   int num1 = 0;
   int num2 = 0;
   int sum = 0;
   int diff = 0;

   cout << "Enter the first integer: ";
   cin >> num1;
   cout << "Enter the second integer: ";
   cin >> num2;
   cout << endl << endl;

   cout << "First Integer: " << num1 << endl;
   cout << "Second Integer: " << num2 << endl << endl;

   sum = add(num1, num2);
   diff = subtract(num1, num2);
   
   cout << num1 << " + " << num2 << " = " << sum;
   cout << endl;
   cout << num1 << " - " << num2 << " = " << diff;
   cout << endl;

   return 0;
}