/*C++ Program to Calculate the Area of a Triangle- Scalene, equilateral, right-angle*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
float base, height, scal_area, equi_area, right_area;
cout<<"Enter the base and height of a triangle"<<endl;
cin>>base>>height;
//scalene triangle -->1/2(b*h)
scal_area= 1/2*(base*height);
cout<<"Area of scalene triangle is"<<scal_area<<endl;
//equilateral triangle 
equi_area= (sqrt(3)/4) * base*base;
cout<<"Area of equilateral triangle is:"<<equi_area<<endl;
//right angle triangle 
right_area= (base*height )/2;
cout<<"Area of right-angles triangle is:"<<right_area<<endl;
    return 0;
}