//"Nested condition- Get the age and membership_status as user input. membership_status can be only Y or y. So, if the age is bigger or equal to 18 and if the user is a member of our shop, we provide a 10% discount, else we charge fully.
//Write a simple chatbot program using nested conditions."
#include <iostream>
using namespace std;
int main()
{
    int age;
    char status;
    //get the user age 
    cout<<"Enter your age:"<<endl;
    cin>>age;
    //get the membership status 
    cout<<"Enter your membership status:";
    cout<<"Y or y only for yes and n or N for no"<<endl;
    cin>>status;
    //condition 
    if(age>=18 && (status == 'Y' || status=='y'))
    {
        cout<<"You are provided with discount of 10%"<<endl;
    }
    else
    {
        cout<<"You are charged in full!"<<endl;
    }
    return 0;
}