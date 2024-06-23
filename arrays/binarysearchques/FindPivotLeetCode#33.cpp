#include<iostream>
#include<vector>
using namespace std;



 int findPivotIndex(vector<int>& arr){
        int size = arr.size();
        int start = 0;
        int end = size-1;
        while(start <= end){
            int mid = start + (end-start)/2;
            // corner case
            if(start == end){
                //handling single element
                return start;
            }

            if(arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid] < arr[mid-1]){
                return mid-1;
            }
            else if(arr[start] > arr[mid] ){
                end = mid -1;
            }
            else{
                start  = mid+1;
            }
        }
        return -1;
    }

int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(14);
    v.push_back(16);
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    
    int pivotIndex = findPivotIndex(v);
    cout << "Pivot Index is: " << pivotIndex << endl;
    return 0;

}