//C++ Program to find a leap year
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
