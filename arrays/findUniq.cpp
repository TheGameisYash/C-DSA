#include<iostream>
using namespace std;

int getUnique(int arr[], int size){
    int ans = 0;
    for(int i=0; i<size; i++){
        ans = ans^arr[i];
    }
    return ans;
}

int main(){
    // this only works with 2 values

    int arr[11] = {2,10,11,10,2,13,15,13,15,16,16};
    int size = 11;

    int finalAns = getUnique(arr,size);
    cout << " Unique Number is:  " << finalAns << endl;
}