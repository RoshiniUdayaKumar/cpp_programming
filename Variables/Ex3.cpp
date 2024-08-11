//C++ Program to Add/Subtract/Multiply/Divide Two Integers.
#include <iostream>
using namespace std;
int main()
{
int a,b;
int sum,diff,mul,divi;
cout<<"Enter two interger values:";
cin>>a>>b;
sum=a+b;
diff=a-b;
mul=a*b;
divi=a/b;
cout<<"Addition:"<<sum<<endl;
cout<<"Subtraction:"<<diff<<endl;
cout<<"Multiplication:"<<mul<<endl;
cout<<"Division:"<<divi<<endl;
return 0;
}