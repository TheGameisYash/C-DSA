#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

void shiftNeg(int arr[], int size){
    int j=0;

    for(int i=0; i<size; i++){
        if(arr[i]<0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
}

int main(){
    int arr[8] = {23,56,-5,-74,85,-9,0,85};

    shiftNeg(arr, 8);
    printArray(arr, 8);
}