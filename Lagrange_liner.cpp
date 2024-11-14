#include <iostream>
using namespace std;

int main() {

    double x1 = 2.0, f_x1 = 1.4142;
    double x2 = 3.0, f_x2 = 1.7321;
    double x = 2.5;

    double f_x = f_x1 + (x - x1) * (f_x2 - f_x1) / (x2 - x1);

    cout << "The approximate square root of " << x << " is: " << f_x << endl;

    return 0;
}
