#include <iostream>
#include <cmath>
using namespace std;

double f(double x) {
    return x * x - 4 * x - 10;
}

int main() {
    double x0=4.0;
    double x1 =2.0;
    double tolerance=0.0001;
    double x2;

    int iteration=0;

    while (fabs(f(x1)) > tolerance) {

        x2 = x1 - (f(x1) * (x1 - x0)) / (f(x1) - f(x0));


        x0 = x1;
        x1 = x2;

        iteration++;

        cout << "Iteration " << iteration << ": x = " << x2 << ", f(x) = " << f(x2) << endl;
    }

    cout << "\nThe root of the equation is approximately: " << x2 << endl;

    return 0;
}
