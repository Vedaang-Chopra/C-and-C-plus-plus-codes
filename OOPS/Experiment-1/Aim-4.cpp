#include<iostream>
#include<cstdio>
using namespace std;
class student
{
string name;
int submarks[5],rollno;
float perc;
public:
    void input();
    void output();
    void percentage()
    {
        perc=0;
        for(int i=0;i<5;i++)
        {
        perc=this.submarks[i]+perc;
            }
        perc=perc/5;
        cout<<this.perc;
        }
};
void student::input()
{

    cout<<endl<<"Enter the roll no. of student:";
    cin>>this.rollno;
    cout<<endl<<"Enter the name of the student:";
    gets(this.name);
    cout<<endl<<"Enter the marks of the student:";
    for(int i=0;i<5;i++)
    {
        cin>>this.submarks[i];
    }
    cout<<endl<<"Data Entered..............................";

}
void student::output()
{

    cout<<endl<<"The roll no. of the student is:";
    cout<<this.rollno;
    cout<<endl<<"The name of the student is:";
    cout<<this.name;
    cout<<endl<<"The marks of the student are:";
    for(int i=0;i<5;i++)
    {
        cout<<"Subject"<<i+1<<this.submarks[i]<<endl;
    }
    cout<<endl<<"Hence percentage is:"<<percentage();
    cout<<endl<<"Data Displayed..............................";
}
int main()
{
    student A[2];
    cout<<endl<<"Enter data of 2 students:";
    for(int i=0;i<2;i++)
    {

        A[i].input();
    }
    cout<<endl<<"Data of all students entered:";
    for(int i=0;i<2;i++)
    {

        A[i].output();
    }
    return 0;
}
