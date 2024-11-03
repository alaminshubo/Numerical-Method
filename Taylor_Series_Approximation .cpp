#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double x=0.2;
    double true_value= exp(x);
    double one =1+x;
    double two=one+(x*x)/2.0;
    double three=two+(x*x*x)/6.0;
    cout << "True value : " << true_value << endl;
    cout << "Approximation using 2 terms  : " << one <<"error: "<<fabs(true_value-one)<< endl;
    cout << "Approximation using 3 terms  : " << two <<"error: "<<fabs(true_value-two)<< endl;
    cout << "Approximation using 4 terms  : " << three <<"error: "<<fabs(true_value-three)<< endl;
    return 0;
}

