/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<cstdio>
#include<cstdlib>

using namespace std;
class overload{
    int a;
    float b;
    double c;
    public:
    int inc(int a)
    {
       this->a=a;
       (this->a)++;
       return this->a; 
    }
    float inc(float a)
    {
       this->b=a;
       (this->b)++;
       return this->b; 
    }
    double inc(double a)
    {
       this->c=a;
       (this->c)++;
       return this->c; 
    }
    char d;
    int intinput(int a)
    {
       return this->inc(a);
    }
    int floatinput(float a)
    {
      return  this->inc(a);
    }
    int doubleinput(double a)
    {
    return  this->inc(a);
    }
};
int main()
{
    overload object1;
    cout<<"Practicing Overloading..................................";
    cout<<endl<<"Enter type of number(int,double,float):";
    cout<<endl<<"Press 1 for integer.";
    cout<<endl<<"Press 2 for float.";
    cout<<endl<<"Press 3 for double.";
    cout<<endl<<"Press anything else to exit.";
    cout<<endl<<"Enter value:";
    cin>>object1.d;
    cout<<endl<<"Enter the data for number:";
    int a;
    cin>>a;
    cout<<"Calling overloaded incremented function...............";
    switch(object1.d)
    {
    case '1':cout<<endl<<"New value:"<<object1.intinput(a);    
            break;
    case '2':cout<<endl<<"New value:"<<object1.floatinput(a);   
            break;
    case '3':cout<<endl<<"New value:"<<object1.doubleinput(a);    
            break;
    default:exit(0);
    
    }
    cout<<endl<<"Press Enter to exit.";
	getchar();
	return 0;
}




