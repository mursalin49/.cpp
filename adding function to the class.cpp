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
         cout<<" id :"<<id<< " & " <<" gpa : "<<gpa<<endl; // ata cara lika jai
}
};
int main()
{
    Student Nirob,Sowrov,Niloy;
    Nirob.id=101;
    Nirob.gpa=3.44;
    Nirob.display(); //cout<<" id :"<<id<< " & " <<" gpa : "<<gpa<<endl; ai babee


    Sowrov.id=102;
    Sowrov.gpa=3.45;
 Sowrov.display();

    Niloy.id=101;
    Niloy.gpa=3.43;
    Niloy.display();
    getch();
}

