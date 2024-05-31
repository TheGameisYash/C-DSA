#include <iostream>
using namespace std;

int FirstOccur(int arr[], int size, int key) {
   int start = 0;
   int end = size-1;
   int ans = -1;
   while(start<=end){
    int mid = start+(end-start)/2;
    if(arr[mid] == key){
        ans = mid;
        end = mid-1;
    }
    else if(arr[mid]> key){
        end = mid-1;
    }
    else if(arr[mid]<key){
        start = mid +1;
    }
   }
   return ans;
}

int LastOccur(int arr[], int size, int key) {
    int start = 0;
    int end = size-1;
    int ans = -1;
    while(start<=end){
        int mid = start+(end-start)/2;
        if(arr[mid] == key){
            ans = mid;
            start=mid+1;
            
        }
        else if(arr[mid]<key){
            start = mid+1;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        
    }
    return ans;
    
}

int main() {
    int even[16] = {0, 0, 1, 2, 3, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 6};
    int key = 5;

    int firstOccurIndex = FirstOccur(even, 16, key);
    int lastOccurIndex = LastOccur(even, 16, key);

    if(firstOccurIndex == -1 && lastOccurIndex == -1 ){
        cout << "key not Found"<< endl;
    }
    else{
        cout << "First Occurrence of "<< key<<  " is at index " << firstOccurIndex << endl;
        cout << "Last Occurrence of " << key<< " is at index " << lastOccurIndex << endl;
        cout << "Total number of Occurrence of "<< key << " is "<< lastOccurIndex- firstOccurIndex +1<< endl;

    }

    

    
    

   

    return 0;
}
