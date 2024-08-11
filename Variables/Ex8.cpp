//C++ Program to Calculate the Area and Perimeter of a Rectangle 
#include <iostream>
using namespace std;
int main()
{
    float l,h;
     float area, perimeter;
    cout<<"Enter the length and height"<<endl;
    cin>>l>>h;
   area= l*h;
   perimeter = 2*(l+h);
   cout<<"Area is:"<<area<<endl<<"Perimeter is:"<<perimeter<<endl;
   return 0;
}