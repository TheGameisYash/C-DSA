#include<iostream>
using namespace std;

int getPivot(int arr[], int size){
    int start = 0;
    int end = size-1;

    while(start < end){
        int mid = start + (end - start )/2;
        if(arr[mid] >= arr[0]){
            start = mid+1;
        }
        else{
            end = mid;
        }
    } 
    return start;
}

int main() {
    int arr[8] = {3 ,8, 10, 17, 18, 2, 4, 6};

    cout << "Pivot is  " << getPivot(arr, 6) << endl;
}