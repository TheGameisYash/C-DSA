#include<iostream>
using namespace std;

void printArray(int arr[], int size) {
    for(int i = 0; i<size; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}

//present -> true;
//absent -> false;

bool linearSearch(int arr[], int size, int target){
   for(int i=0; i<size; i++){
    if(arr[i] == target){
        //found
        return true;
    }
   } 
   //not found
   return false;
}
void countZeroOne(int arr[], int size){
    int zeroCount=0;
    int oneCount=0;

    for(int i=0; i<size; i++ ){
        if(arr[i] == 0){
            zeroCount++;
        }
        if(arr[i] == 1){
            oneCount++;
        }
    }
    cout << "Zero count: " << zeroCount << endl;
    cout << "one count: " << oneCount << endl;
}


int main(){

    int arr[] = {0,1,0,0,0,1,1,1,1,0,0,0,0,1,0};
    int size = 15;
    countZeroOne(arr,size);



    // int arr[5] = {2,4,6,8,10};
    // int size = 5;
    // int target = 10;

    // bool ans= linearSearch(arr, size, target);

    // if(ans == 1) {
    //     cout << "Target found" << endl;


    // }
    // else {
    //     cout << "Target not found" << endl;
    // }
    //function call
    // printArray(arr, size);

    // int arr[5] = {2,4,6,8,10};
    // int target = 11;
    // int n = 5;

    // bool flag = 0;
    // //0 -> not found
    // //1 -> found

    // for(int i=0; i<n; i++){
    //     if(arr[i] == target) {
    //         //found
    //         flag = 1;
           
    //         break;
    //     }
    // }

    // if(flag==1) {
    //     cout << "target found"; 
    // }
    // else{
    //     cout << "target not found" << endl;
    // }
    


}