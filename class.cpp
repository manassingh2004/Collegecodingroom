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
    float calculatevolume(float w,float l,float h){
        return w*l*h;
    }
};
int main(){
    Room r1;
float area=r1.calculatearea(12.5,14.4);
float volume=r1.calculatevolume(12.5,15.5,14.4);
cout<<"area is "<<area<<endl;
cout<<"volume is "<<volume<<endl;

}