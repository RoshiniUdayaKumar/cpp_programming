/*"BMI Calculator: Create a program that calculates a person's Body Mass Index (BMI) based on their weight and height input. Provide a classification of whether the person is underweight, normal weight, overweight, or obese. Use cin, cout. Formula: bmi = weight / (height * height)
bmi < 18.5- Underweight
bmi < 24.9- Normal Weight
bmi < 29.9- Overweight
Otherwise- Obese"*/
#include <iostream>
using namespace std;
int main()
{
    float height, weight, BMI;
    //request the user to enter height, weight
    cout<<"Give your height and weight:"<<endl;
    cin>>height>>weight;
    //calculate BMI
    BMI= weight / (height*height);
    if (BMI<18.5)
    cout<<"Underwieght";
    else if (BMI > 18.5 && BMI<24.9)
    cout<<"Normal weight";
    else if(BMI>24.9 && BMI< 29.9)
    cout<<"Overweight";
    else 
    cout<<"Obese";
    return 0;
    
}