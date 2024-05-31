#include<iostream>
using namespace std;


void shift(int arr[], int size){
    
    int temp = arr[size-1];
    
    for(int i=size-1; i>=1; i--){
        arr[i] = arr[i-1];
        
    }
    arr[0] = temp;

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";

    }
}

int main(){
    int arr[6] = {10,20,30,40,50,60};

    shift(arr, 6);
}