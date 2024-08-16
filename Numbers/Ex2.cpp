//C++ Program to Find GCD of Two Numbers.
#include<iostream>
using namespace std;
int main()
{
    int result;
    int a,b;
    //request two numbers from the user 
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    result=min(a,b);
    while(result>0)
    {
        if(a%result==0 && b%result==0)
        {
            break;
        }
        result =result-1;
    }
    cout<<"Greatest common factor is:"<<result;
    return 0;
}