
/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/
 #include<iostream>
using namespace std;
inline float lbastokg(float pound){
return 0.453*pound;
}
int main()
{
    float lbs,kg;
    cout<<"enter the weight in pound"<<endl;
    cin>>lbs;
    kg=lbastokg(lbs);
    cout<<"the weight in kilogram is="<<kg;

    
}