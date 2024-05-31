#include<iostream>
using namespace std;

int extremePrin(int arr[], int size){
    int start = 0;
    int end = size-1;
    while(start<=end){
        if(start == end){
            cout << arr[start]<<endl;
        }
        else{
            cout << arr[start] << endl;
            cout << arr[end]<< endl;
        }
        
        start++;
        end--;
    }
}
// 10 =10 = 10

int main(){
    int arr[11] = {10,20,30,40,50,60,70,80,90,100,110};

    extremePrin(arr, 11);
    
}