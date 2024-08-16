//C++ Program to Count Number of 1's in an integer
#include<iostream>
using namespace std;
int main()
{
    long num;  ///1102
    int count=0;
    int res;
    //get the number from the user
    cout<<"Enter any integer number:"<<endl;
    cin>>num;
    while (num>0)
    {
        res=num%10;  //2//110%2=0
        if(res==1)
        {
        count++;
        }
        num=num/10; //1102/10=110//1
        
    }
    cout<<"Number of digits in an integer:"<<count;
    return 0;
}