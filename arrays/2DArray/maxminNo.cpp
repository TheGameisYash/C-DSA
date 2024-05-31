#include<iostream>
#include<limits.h>
using namespace std;

int getMax(int arr[][4], int row, int col){
    int maxi = INT_MIN;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            maxi = max(maxi,arr[i][j]);
        }
    }
    return maxi;
}

int getMin(int arr[][4], int row, int col){
    int mini = INT_MAX;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            mini = min(mini, arr[i][j]);
        }
    }
    return mini;
}



int main(){

    int arr[3][4] = {
                     {1,2,3,4},
                     {5,6,7,8},
                     {9,10,1,11}
                     };
    int row = 3;
    int col = 4;

    int max = getMax(arr, row, col);
    cout<< "Maximum Number in 2D Array is =  " << max << endl;

    int min = getMin(arr, col, row);
    cout<< "Minimum NUmber in 2D Array is =  " << min << endl;
}