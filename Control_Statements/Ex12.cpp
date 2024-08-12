//C++ Program to Check Whether a Character is an Alphabet or not.
#include <iostream>
using namespace std;
int main()
{
    char input;
    
    //request an alphabet from the user 
    cout<<"Enter your input (you can enter either a alphabet or number:"<<endl;
    cin>>input;
    //condition checking 
    if((input>='A' && input <= 'Z') || (input>='a' && input<='z' ))
    {
        cout<<"You entered a alphabet"<<endl;
    }
    else 
    {
        cout<<"You entered a  numerical"<<endl;
    }
    return 0;
}