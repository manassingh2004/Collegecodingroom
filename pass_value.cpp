/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/

#include<iostream>
using namespace std;
void swapr(int&a,int&b);
void swapv(int a,int b);
void swapp(int *a,int *b);

main()
{
    int a =300;
    int b = 350;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"Using refrence to swap"<<endl;
    swapr(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"Using pass by swap"<<endl;
    swapv(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    cout<<"Using call bu address"<<endl;
    swapp(&a,&b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

}
void swapr(int &a,int&b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}
void swapv(int &a,int&b)
{
    int temp;
    temp =a;
    a=b;
    b=temp;
}
void swapp(int *a,int *b)
{
    int temp;
    temp = *a;
    *a=*b;
    *b=temp;
}