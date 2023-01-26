/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/
 #include<iostream>
using namespace std;
int main()
{
    auto num1 = 1,num2=1;
    char op;
    cout<<"Enter num1 and num2: "<<endl;
    cin>>num1 >>num2;
    cout<<"Enter your operator{+,-,*,/,%}:  "<<endl;
    cin>>op;
    switch (op)
    {
    case '+':
    cout<<num1+num2;
        
        break;
    case '-':
    cout<<num1-num2;
    break;
    case '*':
    cout<<num1*num2;
    break;
    case '/':
    cout<<num1/num2;

    break;
    case '%':
    cout<<num1%num2;
    break;

    default:
        break;
    }
    return 0;
}