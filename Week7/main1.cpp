#include <iostream>
using namespace std;

const int OK = 0;
const int DIV_ZERO = 1;

int intersect(double& xit, double& yit, double a1t, double b1t, double a2t, double b2t) {
    int i = 0;

    if (a1t - a2t != 0) {
        xit = (b2t - b1t) / (a1t - a2t);
        yit = (a1t * xit + b1t);
        
        i = OK;
    }
    else {
        i = DIV_ZERO;
    }
    
    return i;
}

int main() {
    int flag = 0;

    double a1 = 0.0, b1 = 0.0, a2 = 0.0, b2 = 0.0;
    cout << "Enter coefficients for Line 1 (a1, b1): ";
    cin >> a1 >> b1;
    cout << endl;

    cout << "Enter coefficients for Line 2 (a2, b2): ";
    cin >> a2 >> b2;
    cout << endl;

    cout << "Line 1: Y = " << a1 << "X + " << b1 << endl;
    cout << "Line 2: Y = " << a2 << "X + " << b2 << endl;

    double xi, yi;

    flag = intersect(xi, yi, a1, b1, a2, b2);

    if (flag == DIV_ZERO)
    {
        cout << "Lines are parallel" << endl;
    }
    else
    {
        cout << "\nLines 1 & 2 intersect at {" << xi << ", " << yi << '}' << endl;

        cout << "Proof: yi on Line 1 at (xi = " << xi << ") is "
            << a1 * xi + b1 << endl;
        cout << "       yi on Line 2 at (xi = " << xi << ") is "
            << a2 * xi + b2 << endl;
    }

    return 0;
}