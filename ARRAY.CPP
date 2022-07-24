#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int marks[5];
    for(int i=1;i<5;i++){
            cout<<" marks for student"<<i<<" = ";
        cin>>marks[i];
    }
    cout<<"marks are :";
    for(int i=1;i<5;i++)
    {
        cout<<marks[i]<<" ";
    }
    getch();
}
