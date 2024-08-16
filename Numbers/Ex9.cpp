//C++ Program to Count Number of 1's in an integer
#include<iostream>
using namespace std;
int main()
{
int year;
cout<<"Enter the year:"<<endl;
cin>>year;
if(year%4==0 || year%100!=0)
{
    cout<<"leap year";
}
else
cout<<"not a leap year";
    return 0;
}