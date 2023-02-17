/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/
 #include<iostream>
using namespace std;
class Room
{
private:
    float w;
    float h;
    float l;
public:
    float calculatearea(float w,float l)
    {
    return w*l;
    }
    float calculatevolume(float w,float l,float h=5){
        return w*l*h;
    }
};
int main(){
    Room r1;
float area=r1.calculatearea(12.5,14.4);
float volume=r1.calculatevolume(5,5);
cout<<"area is "<<area<<endl;
cout<<"volume is "<<volume<<endl;

}