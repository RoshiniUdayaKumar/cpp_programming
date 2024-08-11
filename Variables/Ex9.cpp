//C++ Program to Calculate the Area and Perimeter of a square 
#include <iostream>
using namespace std;
int main()
{
    float l;
     float area, perimeter;
    cout<<"Enter the length"<<endl;
    cin>>l;
   area= l*l;
   perimeter = 4*l;
   cout<<"Area is:"<<area<<endl<<"Perimeter is:"<<perimeter<<endl;
   return 0;
}