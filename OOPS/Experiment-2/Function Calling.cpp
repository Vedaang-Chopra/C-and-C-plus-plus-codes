#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
class swap1{
    int a;
    int b;
    public:
    swap1()
    {
        this->a=10;
        this->a=20;
    }
    swap1(int a, int b)
    {
        this->a=a;
        this->b=b;
    }
    int c;
    void swapvalue(int a,int b)
    {
        this->a=a;
        this->b=b;
        int t;
        t=this->a;
        this->a=this->b;
        this->b=t;
        cout<<endl<<"Value after swapping call by value(in function):"<<endl<<"a="<<this->a<<"      "<<"b="<<this->b;
    }
    void swapaddress(int *a,int *b)
    {
        this->a=*a;
        this->b=*b;
        int t;
        t=this->a;
        this->a=this->b;
        this->b=t;
        cout<<endl<<"Value after swapping call by address(in function):"<<endl<<"a="<<this->a<<"      "<<"b="<<this->b;
    }
     void swaprefernce(int &x,int &y)
    {
        this->a=x;
        this->b=y;
        int t;
        t=this->a;
        this->a=this->b;
        this->b=t;
        cout<<endl<<"Value after swapping call by refernce(in function):"<<endl<<"a="<<this->a<<"      "<<"b="<<this->b;
    }
    void input(int a, int b)
    {
      swap1(a,b);
    }
    int dispa()
    {
        return this->a;
        
    }
    int dispb()
    {
        return this->b;
        
    }
};
   
int main() {
	cout<<"Enter the swapping algorithm..........................";
	 cout<<endl<<"Enter value of a:";
	int a;
	cin>>a;
	cout<<endl<<"Enter value of b:";
	int b;
	cin>>b;
	swap1 object1;
	object1.input(a,b);
	cout<<endl<<"Enter type of swapping...............";
	cout<<endl<<"Press 1. for call by value.";
	cout<<endl<<"Press 2. for call by address.";
	cout<<endl<<"Press 3. for call by reference.";
	cout<<endl<<"Press anything else to exit.";
	cout<<endl<<"Enter value:";
	cin>>object1.c;
	switch(object1.c)
	{
	    case 1:object1.swapvalue(a,b);
	           cout<<endl<<"Values of a and b in main function(actual) are:"<<endl<<"a="<<a<<"           "<<"b="<<b;
	           break;
	           
	    case 2:object1.swapaddress(&a,&b);
	           cout<<endl<<"Values of a and b in main function(actual) are:"<<endl<<"a="<<object1.dispa()<<"           "<<"b="<<object1.dispb();
	           break;
	           
	    case 3:object1.swaprefernce(a,b);
	            cout<<endl<<"Values of a and b in main function(actual) are:"<<endl<<"a="<<object1.dispa()<<"           "<<"b="<<object1.dispb();
	           break;
	    default:exit(0);
	}
	cout<<endl<<"Press Enter to exit.";
	getchar();
	return 0;
}
