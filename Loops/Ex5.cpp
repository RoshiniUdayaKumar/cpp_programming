//Program to display sum of series 1 + 1/2 + 1/3 + ... + 1/n.
#include <iostream>
using namespace std;
int main()
{
    float num;
    float sum=0;
    float digit;
    //take the sequence of items to be added by the user 
    cout<<"Enter the number of digits for the operation:"<<endl;
    cin>>num;
    
    //start of iteration 
    for (float i=1; i<=num; i++)
    {
        digit= 1/i; //(1/1=1),(1/2=0.5)
       sum=sum+digit;//(0+1=1),(1+0.5=1.5)
        cout<<sum<<endl;//1-->1.5....2.08    
        }
    return 0;
    
}