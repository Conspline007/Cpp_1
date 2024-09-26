#include <iostream>
using namespace std;


int main()
{
   int x,y,z;
   cout<<"Enter the value of the 1st number ";
   cin>>x;
   cout<<"Enter the value of the 2nd number ";
   cin>>y;
   z=x;
   x=y;
   y=z;
   cout<<"The new values of 1st and 2nd number are "<< x << " and " << y;
   return 0;
}
   