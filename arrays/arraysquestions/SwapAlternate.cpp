#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
    cout << endl;
}

void swapAlternate(int arr[], int size) {

    for(int i=0; i<size-1; i+=2){
        if(i+1 < size) {
            swap(arr[i], arr[i+1]);

        }
        
    }
}

int main(){


    int even[6] = {1,3,2,7,11,8};

    int odd[5] = {11,33,9,76,43};

    swapAlternate(even, 6);
    printArray(even, 6);

    cout << endl;

    swapAlternate(odd, 5);
    printArray(odd, 5);


    return 0;




}