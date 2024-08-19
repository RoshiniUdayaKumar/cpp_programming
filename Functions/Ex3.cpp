////C++ Program to Reverse a Sentence reverse().
#include <iostream>
#include <string>      //since the datatype is a string
#include <algorithm>   //include this to use the reverse()
using namespace std;
int main()
{
    string mystr;
    cout<<"Enter any string:"<<endl;
    cin>>mystr;
    reverse(mystr.begin(), mystr.end());
    cout<<"After string reverse:"<<mystr<<endl;
    return 0;
}