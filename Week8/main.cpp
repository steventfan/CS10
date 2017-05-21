#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector<double>& userVector) //(3) FIXME - Add Parameter
{
    double userDouble = 0.0;

    cout << "Enter numbers to populate the vector ";
    cout << "(enter any other character to end user input): "; 

    while (cin >> userDouble) {
      userVector.push_back(userDouble);
    }
    cout << endl;

    return;
}

double meanVector(const vector <double> &v) {
    int i = 0;
    double totalSum = 0.0;
    double meanVal = 0.0;
    int j = 0;
    j = v.size();
    for (i = 0; i < j; ++i) {
        totalSum = totalSum + v.at(i);
    }
    meanVal = totalSum / static_cast<double>(v.size());
        
   return meanVal;
}

double varianceVector(double vectorAvg, const vector <double> &v) {
    int i = 0;
    double totalSum = 0.0;
    double varVal = 0.0;
    int j = 0;
    j = v.size();
    for (i = 0; i < j; ++i) {
        totalSum = totalSum + pow(v.at(i) - vectorAvg, 2);
    }
    varVal = totalSum / static_cast<double>(v.size());
   
   return varVal;
}

double standardDeviationForVariance(double vectorVariance) {
    double stdVal = 0.0;
    stdVal = sqrt(vectorVariance);
   //(6) FIXME - Calculate standard deviation
   return stdVal;
}

int main() {
   //(3) FIXME - Declare vector of doubles
   double avg = 0.0;
   double var = 0.0;
   double stdDev = 0.0;
   int i = 0;
   int j = 0;
   vector<double> vectorTest(0);
    
    fillVector(vectorTest);
   //(3) FIXME - Call fillVector() function

   cout << "You entered: ";
   j = vectorTest.size();
   for (i = 0; i < j; ++i) {
       cout << vectorTest.at(i) << " ";
   }
   cout << endl;
   //(3) FIXME - Print vector values (use i variable)

    avg = meanVector(vectorTest);
   //(4) FIXME - Call meanVector() function

    var = varianceVector(avg, vectorTest);
   //(5) FIXME - Call varianceVector() function

    stdDev = standardDeviationForVariance(var);
   //(6) FIXME - Call standardDeviationForVariance() function

   cout << "The mean is: " << avg << endl;
   cout << "The variance is: " << var << endl;
   cout << "The standard deviation is: " << stdDev << endl;

   return 0;
}