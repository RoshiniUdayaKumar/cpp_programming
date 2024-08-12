//C++ Program to find the Largest Number Among Three Numbers.
#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter three numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>b && a>c)
    cout<<"a is larger among three";
    else if(b>c && b>a)
    cout<<"b is larger among three";
    else
    cout<<"c is larger";
    return 0;
}