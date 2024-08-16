//C++ Program to Calculate the Power of a Number.
#include<iostream>
using namespace std;
int main()
{
    int num;
    int power;
    int result=1;
    
    //get the number from the user 
    cout<<"Enter any number:"<<endl;
    cin>>num;
    cout<<"Enter the power:"<<endl;
    cin>>power;
    while(power>0)
    {
        result=result*num;
        power --;
    }
     cout<<result<<endl;
    return 0;
}