#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    for(int i=1;i<=100;i+=3)
    {
        if(i==10)
        {
          continue;
        }
        cout<<i<<endl;

        getch();
    }
}
