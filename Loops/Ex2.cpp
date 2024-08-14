//"Program to print Fibonacci series up to 100.
//Hint: Fibonacci Series is 1, 1, 2, 3, 5, 8, 13, 21, ...."
#include <iostream>
using namespace std;
int main()
{
    int first=1;
    int second=1;
    int third;
    //create a loop for sequence of numbers 
    for (int i=1; i<7; i++)
    {
        cout<<first; //1//1//2//3//5....
        third =first+second; //1+1=2//1+2=3//2+3=5//3+5=8
        first=second;//1//2//3//5
        second=third;//2//3//5//8
    }
    return 0;
}
