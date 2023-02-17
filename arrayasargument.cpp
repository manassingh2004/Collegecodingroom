/*Name - Manas kumar singh
 Roll no - 21423
 Reg no - 21105128002
 Branch - CSE
 Collage - BPMCE Madhepura*/

#include <iostream>
using namespace std;
 

double getAverage(int arr[], int size);

int main () {
   
   int balance[5] = {1000, 2, 3, 17, 50};
   double avg;

   
   avg = getAverage( balance, 5 ) ;
 
 
   cout << "Average value is: " << avg << endl; 
    
   return 0;
}
double getAverage(int arr[], int size) {
  int i, sum = 0;       
  double avg;          

   for (i = 0; i < size; ++i) {
      sum += arr[i];
   }
   avg = double(sum) / size;

   return avg;
}