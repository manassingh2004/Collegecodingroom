/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/
#include<iostream>
using namespace std;
int summary(int arr[],int size){
    int sum=0,j;
    for(j=0;j<size;j++){
        sum=sum+arr[j];
    }
    return sum;

}
int main(){
    int arr[10],i;
    cout<<"Enter 10 values"<<endl;
    for(i=0;i<10;i++){
        cin>>arr[i];
    }
    int result=summary(arr,10);
    cout<<"Total sum "<<result;
    return 0;
}