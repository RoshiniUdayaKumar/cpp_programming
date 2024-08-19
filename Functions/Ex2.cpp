//Write a program to swap two values using functions.
#include <iostream>
using namespace std;

//swap function 
void swap (int &num1, int &num2)
{
    int result;
    result = num1;
    num1 = num2;
    num2 = result;

}

//main function 
int main()
{
    int a,b;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    cout<<"Numbers before swapping:"<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"Numbers after swapping:"<<a<<" "<<b<<endl;
    return 0;
}