//C++ Program to Check Whether a Number is Positive or Negative.
#include <iostream>
using namespace std;
int main()
{
    long num;
    cout<<"Enter the number:";
    cin>>num;
    if(num>0)
    cout<<"The entered number is positive"<<endl;
    else if(num<0)
    cout<<"The entered number is negative"<<endl;
    else
    cout<<"The number is a zero.";
    return 0;
}