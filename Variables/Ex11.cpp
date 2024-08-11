//C++ Program to Swap Two Numbers with temp
#include <iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Value of a before swapping:"<<a<<endl;
     cout<<"Value of b before swapping:"<<b<<endl;
    temp=b;
    b=a; 
    a=temp;
    cout<<"Value of a after swapping is:"<<a<<endl;
      cout<<"Value of b after swapping is:"<<b<<endl;
    return 0;
}