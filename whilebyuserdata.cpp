/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/
 #include<iostream>
using namespace std;
int main()
{
    int count = 1, sum = 0, val;
    cout<<"enter any number you want or you want to print";
    cin>>val;
    
    while (count <= val )
    {
        sum += count;
        count = count + 1;
    }
    cout<<"the sum of 1 to"<<val<< " = "<<sum <<endl;
    return 0; 
}