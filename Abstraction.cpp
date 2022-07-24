#include<iostream>
#include<conio.h>
using namespace std;
class mobileUser
{
public:
    void call()
    {
        cout<<" Hello ! "<<endl;

    }
    virtual void sendmessage()=0;
};
class Nirob : public mobileUser{
public:
    void sendmessage()
    {
        cout<<" Hi, This is Nirob"<<endl;
    }
};
class Sourov : public mobileUser{
public:
    void sendmessage()
    {
        cout<<" Hi, This is sourov"<<endl;
    }
};
int main()
{
    mobileUser*m;
    Nirob n;
    Sourov s;
    m=&n;
    m->sendmessage();
    m=&s;
    m->sendmessage();
    getch();
}
