//C++ program that converts between Celsius and Fahrenheit temperatures based on user input. 
#include <iostream>
using namespace std;

int main()
{
    float C;
    float Fahrenheit;
    
    //celsius to Fahrenheit
    cout<<"Enter the temperature in degree C:"<<endl;
    cin>>C;
    Fahrenheit= (9.0/5.0)*C + 32;
    cout<<"Temperature in Fahrenheit is:"<<Fahrenheit;
    return 0;
    }