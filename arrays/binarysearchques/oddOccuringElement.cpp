#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[], int size){
    int start =0;
    int end = size-1;

    while(start<=end){
        int mid = start + (end - start)/2;
        //single element case
        if(start == end){
            return start;
        }

        //mid check -> even or odd
        if(mid & 1){
            if(mid-1>=0 && arr[mid-1] == arr[mid]){
                start = mid +1;
            }
            else{
                end = mid-1;
            }
        }
        else{
            //even
            if(mid+1< size && arr[mid] == arr[mid+1]){
                //right me jao
                start = mid +2;
            }
            else{
                // ya toh mai right part me khda hun 
                //ya toh mai ans pe khada hun
                //that's why e =  mid krra hun
                // kyunki e = mid-1;  se ans lost ho sakta hai
                end = mid;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,10,2,2,3,3,5,5,6,6,7,7,10};
    int size = 13;

    int ansIndex = findOddOccuringElement(arr, size);
    cout << "Final Ans is: " << arr[ansIndex] << endl;
    
}