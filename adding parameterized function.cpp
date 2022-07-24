#include<iostream>
#include<conio.h>
using namespace std;
class Student
{
public :
    int id;
    double gpa;
void display()
{
         cout<<" id :"<<id<< " & " <<" gpa : "<<gpa<<endl;
}
void setValue(int x,double y){
id= x;
gpa = y;   //use parameterized function
}
};
int main()
{
    Student Nirob,Sowrov,Niloy;
    Nirob.setValue(101,3.50);
        Nirob.display();

Sowrov.setValue(102,3.55);
    Sowrov.display();

Niloy.setValue(103,3.65);
       Niloy.display();
    getch();
}


