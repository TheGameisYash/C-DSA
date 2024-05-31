#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<< arr[i] << " ";

    }
    cout << endl;
}

void shiftNegativeOneSide(int arr[], int size){
    int j = 0;
    // j-> memory block -> jaha parr main negative number store kar sakta hun

    for(int index=0; index<size; index++){
       if(arr[index]<0){
        swap(arr[index], arr[j]);
        j++;
       }
    } 

}


int main(){

    int arr[7] = {23,-7,12,-10,-11,40,60};

    shiftNegativeOneSide(arr, 7);

    printArray(arr, 7);

}