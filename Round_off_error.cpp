#include<iostream>
using namespace std;

int main()
{
    double sum=0.1;
    double increment = 0.0;
    for(double i=0; i<10; i++)
    {
        sum += increment;
    }
    cout<<"Sum of 0.1 added 10 time: "<<sum<<endl;
    if (sum==1.0)
    {
        cout<<"The sum is exactly 1.0"<<endl;
    }
    else
    {
        cout<<"The sum is not exactly 1.0 due to round off error"<<endl;
    }
    if (sum==1)
    {
        cout<<"The sum is exactly 1"<<endl;
    }
    else
    {
        cout<<"The sum is not exactly 1"<<endl;
    }
    return 0;
}

