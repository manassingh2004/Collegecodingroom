/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/




#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int age;
    clrscr();
    cout<<"c++ goto statement";
    election;
    cout<<"\nEnter your age:";
    cin>>age;
    if(age<=17)
    {
        cout<<"\nYou are not eligible to vote.";
        goto election;
    }
    else 
    {
        cout<<"You are eligible to vote.";
    }
    getch();
    return 0;
}








