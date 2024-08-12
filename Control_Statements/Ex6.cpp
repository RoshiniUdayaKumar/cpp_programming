//C++ program that allows the user to perform basic arithmetic operations (addition, subtraction, multiplication, division) on two numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b,result;
    char op;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Select from the list of operation(+,-,*,/):"<<endl;
    cin>>op;
        if(op=='+')
    {
        result=a+b;
        cout<<result;
    }
    else if(op=='-')
    {
        result=a-b;
        cout<<result;
    }
    else if(op=='*')
    {
        result=a*b;
        cout<<result;
    }
    else
    result=a/b;
    cout<<result;
    return 0;
}