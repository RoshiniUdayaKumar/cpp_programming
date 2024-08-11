//C++ Program to Calculate the Area and Circumference of a Circle.
#include <iostream>
#define Pi 3.14  //since pi value is constant 
using namespace std;

int main()
{
    float radius, area;
    cout<<"Enter the radius:"<<endl;
    cin>>radius;
    area= Pi*radius*radius;
    cout<<"Area for the entered radius is:"<<area<<endl;
    return 0;
}