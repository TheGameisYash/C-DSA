#include<iostream>
using namespace std;

void rowWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum + arr[i][j];
        }
        cout << "row wise sum :=  "  << sum << endl;
    }
}
void colWiseSum(int arr[][4], int row, int col){
    for(int i=0; i<row; i++){
        int sum = 0;
        for(int j=0; j<col; j++){
            sum = sum + arr[j][i];
        }
        cout << "Col wise sum :=  "  << sum << endl;
    }
}

int main(){
    int arr[3][4] = {
                     {1,2,3,4},
                     {5,6,7,8},
                     {9,10,1,11}
                     };
    int row = 3;
    int col = 4;

    rowWiseSum(arr, row, col);
    colWiseSum(arr, col, row);


}