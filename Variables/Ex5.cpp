//C++ Program to Compute Quotient and Remainder.
#include <iostream>
using namespace std;
int main()
{
int a,b;
int qoutient, rem;
cout<<"Enter two numbers:";
cin>>a>>b;
//qoutient calculation
qoutient=a/b;
cout<<"qoutient is:"<<qoutient<<endl;
rem=a%b;
cout<<"Remainder is:"<<rem;
return 0;
}