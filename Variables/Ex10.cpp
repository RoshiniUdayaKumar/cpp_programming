//C++ Program to Find the Size of int, float, double, and char.
#include <iostream>
using namespace std;
int main()
{
    //datatype variable 
    int a;
    float b;
    char c;
    double d;
    cout<<"Size of int in bytes:"<<sizeof(a)<<endl;  //4 bytes
        cout<<"Size of float in bytes:"<<sizeof(b)<<endl; //4 bytes
            cout<<"Size of char in bytes:"<<sizeof(c)<<endl; //1 byte
                cout<<"Size of doubel in bytes:"<<sizeof(d)<<endl; //8 bytes
    
    return 0;
    
}