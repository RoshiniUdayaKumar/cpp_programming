//Build a program for calculating the area and perimeter of various geometric shapes 
#include <iostream>
#define Pi 3.14
using namespace std;

//square area function 
float SqArea(float num1)
{
    float AreaSq;
    AreaSq= num1*num1;
    return (AreaSq);
}

//perimeter of square 
float SqPeri(float num1)
{
    float PeriSq;
    PeriSq= 4*num1;
    return (PeriSq);
}

//rectangle area function 
float RecArea(float l, float w)
{
    float AreaRc;
    AreaRc= l*w;
    return (AreaRc);
}

//perimeter of rectangle 
float RecPeri(float l, float w)
{
    float PeriRc;
    PeriRc= (2*l)+(2*w);
    return (PeriRc);
}

//area of a circle
float CirArea(float r, float p)
{
    float AreaCircle;
    AreaCircle= p*r*r;
    return (AreaCircle);
}

//circumference of a circle 
float CirCum(float r, float p)
{
    float CircumferenceCir;
    CircumferenceCir= 2*p*r;
    return (CircumferenceCir);
}


//main function 
int main()
{
    //for square
    float a, area,peri;
    cout<<"Enter the length of a square:"<<endl;
    cin>>a;
    area=SqArea(a);
    peri=SqPeri(a);
    cout<<"Area of a square is:"<<area<<endl;
    cout<<"Perimeter of a square is:"<<peri<<endl;
    
    //for rectangle 
    float length, width, rarea, rperi;
    cout<<"Enter the length and width of a rectangle:"<<endl;
    cin>>length>>width;
    rarea=RecArea(length,width);
    rperi=RecPeri(length,width);
    cout<<"Area of a rectangle:"<<rarea<<endl;
    cout<<"Perimeter of a rectangle:"<<rperi<<endl;
    
    //for circle 
    float radius, areac, circumference;
    cout<<"Enter the radius of circle:"<<endl;
    cin>>radius;
    areac= CirArea(radius, Pi);
    circumference= CirCum(radius,Pi);
    cout<<"Area of a circle is:"<<areac;
     cout<<"Circumference of a circle is:"<<circumference;
    
}