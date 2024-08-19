//Write a program to calculate area of a circle using functions.
#include <iostream>
using namespace std;
#define Pi 3.14

//area function (syntax)--> datatype function_name (parameter list) {statements..}
float area(float p, float radius)
{
    float res;
    res= p*radius*radius;
    return (res);
}

//main function 
int main()
{
    float r;
    cout<<"Enter the radius:"<<endl;
    cin>>r;
    float result;
    result = area (Pi, r);
    cout<<"The area of circle is:"<<result<<endl;
    return 0;
}