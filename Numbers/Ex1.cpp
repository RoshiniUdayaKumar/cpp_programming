//Write a program to sum the series up to n (Input n)
#include <iostream>
using namespace std;
int main()
{
    int n;
    int sum=0;
    //request the number from the user
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    sum=(n*(n+1))/2;
    cout<<sum;
    return 0;
}