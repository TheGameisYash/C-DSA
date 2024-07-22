#include<iostream>
using namespace std;

int bns(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    while(start<=end){
        int mid = start +(end-start)/2;
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid]<key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

    }
    return -1;
}

int main(){
    int arr[7] = {45,77,89,90,94,99,100};
    int key = 100;

    int ans = bns(arr, 7, key);

    if(ans != -1){
        cout << "Element found at index: "<< ans << endl;
    }
    else{
        cout << "Element not found"<< endl;
    }
}