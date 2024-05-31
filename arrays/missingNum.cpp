#include<iostream>
using namespace std;


int missingNum(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans ^arr[i];
        cout << i<< " ";
    }

    for(int i=0; i<=size; i++){
        ans = ans^i;
        cout << i <<  " ";
    }
    // cout << ans;
}

int main(){
    int arr[9] = {9,6,4,2,3,5,7,0,1};

    missingNum(arr, 9);
}