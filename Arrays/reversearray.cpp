#include <iostream>
using namespace std;

void reverseArr(int arr[],int size){
    int start =0;
    int end = size -1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    int arr[] = {1,2,3,4,5};
    int size = 5;

   reverseArr(arr, size);
   for(int i=0;i<size;i++){
         cout << arr[i] << " ";
   }
    cout << endl;
}