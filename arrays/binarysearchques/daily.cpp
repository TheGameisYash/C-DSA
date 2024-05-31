#include<iostream>
using namespace std;

int bn(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    

    while(start<=end){
        int mid = (start + end )/ 2;
        if(arr[mid] == key ){
            return mid;
        }
        else if(key>arr[mid]){
            start = mid+1;
        }
        else if(key<arr[mid]){
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[] ={10,24,33,36,48,58,96};
    int key = 58;
    int ans = bn(arr, 7, key); 
    if(ans == -1){
        cout << "Key not found"<< endl;
    }
    else{
        cout << "key found at index "<< ans  << endl;
    }
}