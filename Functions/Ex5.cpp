//C++ Program to calculate the power using recursion function.
#include <iostream>
using namespace std;

//power function 
int Powfunc(int &n, int &pwr)
{
    int result=1;
    while(pwr>0)
    {
        result=result*n;
        pwr--;
    }
    return (result);
}


//main function 
int main()
{
    int num, power;
    int res;
    cout<<"Enter the number:"<<endl;
    cin>>num;
    cout<<"Enter the power:"<<endl;
    cin>>power;
    res=Powfunc(num,power);
    cout<<"The power of a number is:"<<res<<endl;
    return 0;
}