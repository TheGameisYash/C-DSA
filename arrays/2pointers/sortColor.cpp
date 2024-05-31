#include<iostream>
using namespace std;

void sortColor(int arr[], int size){
    int left=0;
    int right=size-1;
    int index=0;

    while(index <= right){
        if(arr[index]==0){
            swap(arr[index], arr[left]);
            left++;
            index++;
        }
        else if(arr[index]==2){
            swap(arr[index], arr[right]);
            right--;
        }
        else{
            index++;
        }
    }
}

void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout << arr[i]<< " ";

    }
    cout << endl;
}

int main(){
    int arr[8] = {1,2,2,0,0,0,1,1};

    sortColor(arr, 8);
    printArray(arr,8);
}