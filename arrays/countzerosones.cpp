#include<iostream>
using namespace std;

int ans(int arr[], int size){
    int zero = 0;
    int one = 0;
    for(int i=0; i<size; i++){
        if(arr[i] == 0){
            zero++;
        }
        else{
            one++;
        }
    }

    cout << "Zero counts " << zero << endl;
    cout << "One counts " << one << endl;


}



int main(){
    int arr[10] = {0,0,0,1,1,1,0,0,0,1};

    ans(arr, 10);


}