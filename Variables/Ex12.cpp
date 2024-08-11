//swap two numbers without using temp
#include <iostream>
using namespace std;
int main()
{
    //using arithmetic operators
    int a=10, b=5;
    cout<<"The value of a before swapping:"<<a<<endl;
    cout<<"The value of b before swapping:"<<b<<endl;
    a=a+b; //a-->10+5=15
    b=a-b;      //b-->10(15-5)
    a=a-b;          //a-->5(15-10)
    cout<<"The value of a after swapping:"<<a<<endl;
    cout<<"The value of b after swapping:"<<b<<endl;
    return 0;
}
