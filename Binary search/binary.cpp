#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int binarysearch(vector<int> arr,int target){
    int lb=0;
    int ub=arr.size()-1;
    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(target > arr[mid]){
            lb = mid+1;
        }
        else if(target < arr[mid]){
            ub = mid-1;
        }
        else {
            return mid;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = { -5 , -2 , 0 , 3 , 7 , 11 , 20 , 25 , 30};
    int target = -5;

    cout << binarysearch( arr , target);
}