//C++ Program to Find LCM of Two Numbers.

#include<iostream>
using namespace std;
int main()
{
    int gcd;
    int a,b;
    int lcm;
    //request two numbers from the user 
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    gcd=min(a,b);
    while(gcd>0)
    {
        if(a%gcd==0 && b%gcd==0)
        {
            break;
        }
        gcd =gcd-1;
    }
    lcm= (a*b)/gcd;
    cout<<"Least common multiple is:"<<lcm;
    return 0;
}