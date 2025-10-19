#include <iostream>
using namespace std;

linearSearch(int arr[],int sz,int target){
    for(int i=0;i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = { 3 ,4 ,8, 1 ,9, 2};
    int sz = 6;
    int target = 9;
    cout << linearSearch(arr,sz,target)<<endl;
}