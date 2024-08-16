//C++ Program to Count Number of Digits in an Integer.
#include<iostream>
using namespace std;
int main()
{
    long num;
    int count=0;
    //get the number from the user
    cout<<"Enter any integer number:"<<endl;
    cin>>num;
    while (num>0)
    {
        num=num/10;
        count++;
    }
    cout<<"Number of digits in an integer:"<<count;
    return 0;
}