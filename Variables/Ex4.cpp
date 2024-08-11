//C++ Program to Add/Subtract/Multiply/Divide two Floating Point Numbers.
#include <iostream>
using namespace std;
int main()
{
float a,b;
float sum,diff,mul,divi;
cout<<"Enter two floating values:";
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