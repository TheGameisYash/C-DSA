#include<iostream>
using namespace std;


void printArray(int arr[], int size) {
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";

    }
    cout << endl;
}

void sortOne(int arr[], int size){
    
    int left = 0, right = size-1;

    
    while(left < right){

        while(arr[left]==0 && left<right){
            left++;
        }
        while(arr[right]==1 && left<right){
            right--;
        }
        
        //agar yha tak phunch gye ho iska matlab
        //arr[i] == 1 and arr[j] == 0
        if(left<right){

            swap(arr[left], arr[right]);
            left++;
            right--;

        }

       
    }
}

int main(){
    int arr[12] = {1,1,0,0,0,0,1,0,1,1,1,1};

    sortOne(arr, 12);
    printArray(arr, 12);
}