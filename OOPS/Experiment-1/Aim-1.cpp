#include<iostream>
using namespace std;
int main()
{
cout<<"Enter the number:";
int a,flag=0;
cin>>a;
for(int i=0;i<=a-1;i++)
{
    if(a%i==0)
    {
        flag=1;
    }
}
    if(flag==1)
        {
        cout<<endl<<"Number is not prime.";
        }
    else
    {
        cout<<endl<<"Number is prime.";

    }
    return 0;
}
