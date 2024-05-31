#include<iostream>
#include<vector>
using namespace std;

int findPeak(vector<int>& arr){
    int size = arr.size();
    int start = 0;
    int end = size -1;
    while(start<end){
        int mid = start+(end-start)/2;
        if(arr[mid]<arr[mid+1]){
            start = mid +1;
        }
        else{
            end = mid;
        }
    }
    return start;
}

int main(){
    
    vector<int> arr = {10,20,30,40,50,60,80,70,60,10};

    int peakValue = findPeak(arr);
    cout << "Peak value: " << peakValue << endl;
    return 0;
    

}