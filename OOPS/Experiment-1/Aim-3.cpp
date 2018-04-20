#include<iostream>
using namespace std;
int main()
{
int a;
cout<<"Enter the number for palindrome check:";
cin>>a;
int r,c,n=0;
a=c;
do
{
    r=c%10;
    n=(n*10)+r;
    c=c/10;
}while(c!=0)
if(n==a)
{
    cout<<endl<<"Number is a palindrome.";
}
else{
    cout<<endl<<"Number is not a palindrome.";
}
return 0;
}

