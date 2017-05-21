#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1 = 0.0;
    double x2 = 0.0;
    double y1 = 0.0;
    double y2 = 0.0;
    double distance = 0.0;
    
    cout << "Enter first x-value:" << endl;
    cin  >> x1;
    cout << "Enter first y-value:" << endl;
    cin  >> y1;
    cout << "Enter second x-value:" << endl;
    cin  >> x2;
    cout << "Enter second y-value:" << endl;
    cin  >> y2;
    
    distance = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2) );
    cout << "The distance between the two points is " << distance << endl;
    
    return 0;
}