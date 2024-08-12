//C++ Program to Check Whether a Number is Even or Odd.
#include <iostream>
using namespace std;
int main()
{
    long num;
    cout<<"Enter the number:";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The entered number is even"<<endl;
    }
    else 
    {
        cout<<"The entered number is odd"<<endl;
    }
    return 0;
}