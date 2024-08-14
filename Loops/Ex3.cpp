//"Program to input a number and then calculate sum of its digits.
#include <iostream>
using namespace std;
int main()
{
    int num,last_digit;
    int sum=0;
    //get the number from the user 
    cout<<"Enter the number:"<<endl;
    cin>>num;
    //calculation
    while(num>0)
    {
        last_digit=num%10; //last digit is obtained 
        num=num/10;  //once we print that we can eliminate it
        sum=sum+last_digit;
        cout<<sum<<endl;
    }
    return 0;
}