#include <iostream>
using namespace std;

int main()
{
    int x,y;
    cout<<"Enter 2 values with space in between ";
    cin>> x >> y;
    cout<<"Let's say a = " << x << " and b = " << y << "\n";
    x=x+y;
    y=x-y;
    x=x-y;
    cout<<"Now after swapping, a = " << x << " and b = " << y;
    return 0;
}