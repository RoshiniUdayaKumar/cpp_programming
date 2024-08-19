//Write a program to convert time to minutes using functions.
#include <iostream>
using namespace std;

float Timeconv(float &h,float &m,float &s)
{
    float h2m;
    float s2m;
    float total;
    h2m= h*60;
    s2m=s/60;
    total= h2m+m+s2m;
    return (total);
}



//main function 
int main()
{
    float hour, min, sec, timec;
    cout<<"Enter the time in- Hours, minutes and seconds"<<endl;
    cin>>hour>>min>>sec;
    cout<<"Entered time is:"<<hour <<"hours"<<" "<<min<<"minutes and "<<sec<<"seconds"<<endl;
    timec= Timeconv(hour, min,sec);
    cout<<"Converted time to minutes is:"<<timec;
    return 0;
}