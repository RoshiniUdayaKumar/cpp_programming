//Program to use switch statement. Display Monday to Sunday.
#include<iostream>
using namespace std;
int main()
{
    //variable to store the option from the user 
    char day;
    
    //request the day from the user
    cout<<"Select an option (1 for monday, 2 for tuesday and so on"<<endl;
    cin>>day;
    
    //using switch statemnt 
    switch (day)
    {
        case '1': 
        cout<<"Monday"<<endl;
        break;
        
        case '2': 
        cout<<"Tuesday"<<endl;
        break;
        
        case '3': 
        cout<<"Wednesday"<<endl;
        break;
        
        case '4': 
        cout<<"Thursday"<<endl;
        break;
        
        case '5': 
        cout<<"Friday"<<endl;
        break;
        
        case '6': 
        cout<<"Saturday"<<endl;
        break;
        
        case '7': 
        cout<<"Sunday"<<endl;
        break;
        
		//if the user enters numbers other than 1 to 7
        default: 
        cout<<"Enter the oprions from 1 to 7"<<endl;
        
    }
    return 0;
}