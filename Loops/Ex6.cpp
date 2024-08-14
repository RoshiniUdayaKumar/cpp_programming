//Program to display series and find sum of 1 + 3 + 5 + ... + n.
#include <iostream>
using namespace std;
int main()
{
    int num=1;
    int next_num;
    
    for (int i=1; i<=5; i++)
    {
        cout<<num<<",";
        next_num=num+2;
        num=next_num;
    }
    return 0;
}