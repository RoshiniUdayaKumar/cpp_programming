//Program to find whether given number is a prime number or not.
#include <iostream>
using namespace std;
int main()
{
int num;
int last_digit;
int sum=0;
cout<<"Enter a number:"<<endl;
cin>>num;
    while(num>0)
    {
        last_digit=num%10; //last digit is obtained 
        num=num/10;  //once we print that we can eliminate it
        sum=sum+last_digit;
    }
    
   if((sum%3==0) || (sum%2==0))
    {
        cout<<"This is not a prime number"<<endl;
    }
    else
    {
        cout<<"It is a prime number";
    }
    return 0;
}