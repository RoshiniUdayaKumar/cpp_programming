//C++ Program to Find ASCII Value of a Character.
#include <iostream>
using namespace std;
int main()
{
    char a;
    cout<<"Enter a character:"<<endl;
    cin>>a;
    //using type casting to obtain the ASCII value
    cout<<"The ASCII value of the character is:"<<(int)a;
    return 0;
    
}