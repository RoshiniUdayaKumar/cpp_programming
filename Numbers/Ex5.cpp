//C++ Program to Reverse a Number.
#include <iostream>
using namespace std;
int main()
{
    int num,rem;
    //get the number from the user 
    cout<<"Enter the num:"<<endl;
    cin>>num;
    while(num>0)
    {
        rem=num%10;
        cout<<rem;
        num=num/10;
    }
    return 0;
}