//C++ Program to Reverse a string using recursion function.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

//Recursion function 
void Recstr(string &str, int start, int end)
{
    if(start<=end)
    {
        swap(str[start],str[end]);  //swap the first and last letter of the string
        //recursion 
        Recstr(str, start+1, end-1);   
    }
    else 
    //if the start index is greater than the last index, stop the recursion 
    return;
}

//main function 
int main()
{
    string mystr;
    cout<<"Enter a string:"<<endl;
    cin>>mystr;
    cout<<"String before reversing it:"<<mystr<<endl;
    Recstr(mystr, 0, mystr.length()-1);
    cout<<"String after reversing it:"<<mystr<<endl;
    return 0;
}