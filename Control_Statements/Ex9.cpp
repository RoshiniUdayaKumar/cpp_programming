/*"Write a program to calculate taxes, with the following conditions:
If the salary is less than $1500, then there are no taxes
If the salary is from 1501 to 3000 $ (1501<= salary < 3000) then the tax should be 10%
If the salary is from 3001 to 5000 $ (3001 <= salary < 5000) then the tax should be 20%
If the salary is above $5000, then the tax should be 30%
Hint: Formula for finding tax (salary * percentage) / 100
You must output:
Tax percentage"*/
#include <iostream>
using namespace std;
int main()
{
    int salary,tax;
    //get the user salary
    cout<<"Enter your salary in dollars:"<<endl;
    cin>>salary;
    if(salary<1500)
    cout<<"No tax"<<endl;
    else if(salary>=1501 && salary<3000)
    {
    cout<<"Tax is 10%"<<endl;
    tax= (salary*10)/100;
    cout<<"Tax amount is:"<<tax<<endl;
    }
    else if (salary>=3001 && salary<5000)
        {
    cout<<"Tax is 20%"<<endl;
    tax= (salary*20)/100;
    cout<<"Tax amount is:"<<tax<<endl;
    }
    else 
    {
    cout<<"Tax is 30%"<<endl;
    tax= (salary*30)/100;
    cout<<"Tax amount is:"<<tax<<endl;
    }
    return 0;
}