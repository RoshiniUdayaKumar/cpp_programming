//Simple Calculator Program
#include <iostream>
using namespace std;

//addition function 
float addition(float num1, float num2)
{
    float add;
    add=num1+num2;
    return (add);
}

//subtraction function 
float subtraction(float num1, float num2)
{
    float sub;
    sub=num1-num2;
    return (sub);
}

//multiplication function 
float multiplication(float num1, float num2)
{
    float mul;
    mul=num1*num2;
    return (mul);
}

//division function 
float division(float num1, float num2)
{
    float divi;
    divi=num1/num2;
    return (divi);
}



//main function 
int main()
{   //take the inputs from user
    float a,b,c;
    cout<<"Enter two numbers:"<<endl;
    cin>>a>>b;
    
    //addition 
    c=addition(a,b);
    cout<<"Addition of two number is:"<<c<<endl;
   
    //subtraction
    float d;
    d=subtraction(a,b);
    cout<<"Subtraction of two number is:"<<d<<endl;
    
    //multiplication
    float e;
    e=multiplication(a,b);
    cout<<"Multiplication of two number is:"<<e<<endl;
    
        
    //division
    float f;
    f=division(a,b);
    cout<<"Division of two number is:"<<f<<endl;
    
     return 0;
}