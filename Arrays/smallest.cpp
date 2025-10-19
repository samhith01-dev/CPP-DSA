#include <iostream>
using namespace std;

int main(){
    int marks[5] = {2,5,-3,10,-10};
    int smallest = INT8_MAX;
    for(int i=0;i<5;i++){
        if(marks[i]<smallest){
            smallest = marks[i];
        }
    }
    cout << "smallest is "<< smallest ;
}