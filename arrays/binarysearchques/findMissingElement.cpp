#include<iostream>
using namespace std;

int findMissingElement(int arr[],  int size){
    int start = 0;
    int end = size-1;
    int ans = -1;

    while(start<=end){
        int mid = start+(end-start)/2;
        int diff = arr[mid] - mid;  // calulates the diffrence 
        if(diff == 1){
            start = mid+1;

        }
        else{
            ans = mid;
            end = mid-1;
        }
    }
    if(ans+1 == 0)
       return size+1;
    return ans+1;

}

int main(){
    int arr[] = {1,2,3,4,5,7,8,9};
    int size = 8;

    cout<< "Missing Element is: " << findMissingElement(arr, size);
}