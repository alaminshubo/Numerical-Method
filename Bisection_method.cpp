#include<iostream>
#include<cmath>
using namespace std;

double f(double x) {
    return x*x - 4*x - 10;
}

int main() {
    double x1, x2, E;
    cout << "Input x1, x2 and Error Tolerance: ";
    cin >> x1 >> x2 >> E;

    if (f(x1)*f(x2)>0)
    {
        cout << "No root in the given interval." << endl;
        return -1;
    }

    double x0;
    while (true) {
        x0=(x1+x2)/2;
        if (fabs(f(x0)) < E) {
            break;
        }

        if (f(x1)*f(x0)<0)
        {
            x2=x0;
        }
        else
        {
            x1=x0;
        }
        if (fabs(x2-x1)<E)
        {
            break;
        }
    }

    cout << "Root: " << x0 << endl;
    return 0;
}
