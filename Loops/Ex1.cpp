/*"Program to calculate sum of numbers from m to n.
Hint: Input two numbers m and n. Find sum of all numbers from m to n.*/
#include <iostream>
using namespace std;
int main()
{
    int m,n;
    int sum;
    //request two numbers from the users 
    cout<<"Enter two number m and n:"<<endl;
    cin>>m>>n;
    
    //iterate through these values 
    for (m;m<=n;m++) //dont initialize m that way it takes the value user gives
    {
       sum=sum+m;
       cout<<sum<<endl;
    }
    return 0;
}
