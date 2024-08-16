//palindrome number 
#include <iostream>
using namespace std;
int main()
{
int num,org_num,rev_num=0, rem;
//get the number from the user 
cout<<"Enter any number:"<<endl;
cin>>num;
//assign this num to org_num to temporarily store this 
org_num=num;
//loop iteration 
while(num>0)
{
    rem=num%10; //12321%10-->1//1232%10-->2//123%10-->3//12%10-->2//1%10-->1
    rev_num= rev_num*10+rem; //0+1-->1//12//123//1232//12321
    num=num/10;//12321/10-->1232//1232/10-->123//123/10-->12//12/10-->1
    
    
}
//printing out the loop to get the final digits
cout<<rev_num;

if(rev_num==org_num)
cout<<"\nEntered number is a Palindrome"<<endl;
else
cout<<"\nEntered number is not a palindrome"<<endl;
return 0;
}