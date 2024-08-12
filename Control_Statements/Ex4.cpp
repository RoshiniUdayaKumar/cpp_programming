//C++ Program to Check Whether a Character is a Vowel or Consonant.
#include <iostream>
using namespace std;
int main()
{
char character;
char a,e,i,o,u;
cout<<"Enter a character"<<endl;
cin>>character;
if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u')
cout<<"The entered character is a vowel";
else 
cout<<"The entered character is a consonant";
return 0;
}