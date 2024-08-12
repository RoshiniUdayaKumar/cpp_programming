//Program to display arithmetic operator using switch case.
#include <iostream>
using namespace std;
int main()
{
    int option; //to store the option selected by the user 
    int a,b,result;
    //request two numbers from the user
    cout<<"Enter two numbers for operation:"<<endl;
    cin>>a>>b;
    //ask the user to select the operation 
    cout<<" Enter the operation you want to perform (1 for add, 2 for sub, 3 for mul and 4 for divi, 5 for modulud"<<endl;
    cin>>option;
    switch (option)
    {
        case 1: //for addition
        result=a+b;
        cout<<"Addition operation:"<<result<<endl;
        break;
        case 2: //for subtraction
        result=a-b;
        cout<<"Subtraction operation:"<<result<<endl;
        break;
        case 3: //for multiplication
        result=a*b;
        cout<<"Multiplication operation:"<<result<<endl;
        break;
        case 4: //for Division
        result=a/b;
        cout<<"Division operation:"<<result<<endl;
        break;
        case 5:
        result =a%b;
        cout<<"Modulus operation:"<<result<<endl;
        break;
        default:
        cout<<"Enter a valid input"<<endl;
    }
    return 0;
}