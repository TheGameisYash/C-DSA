#include<iostream>
using namespace std;

// void findMissing(int *a, int size){
//     for(int i=0; i<size; i++){
//         int index  = abs(a[i]);
//         if(a[index-1]> 0){
//             a[index - 1] *= -1;
//         }
//     }

//     for(int i=0; i<size; i++){
//         cout<<a[i] << " ";
//     }

//     // all positive indexes are missing

//     for(int i=0; i<size; i++){
//         if(a[i] > 0){
//             cout << i+1 << " ";
//         }
        
//     }
// }

// method 2 => sorting and swaping

void findMissing(int *a, int size){
    int i=0;
    while(i<size){
        int index = a[i] -1;
        if(a[i] != a[index]){
            swap(a[i], a[index]);
        }
        else {
            i++;
        }
    }

    for(int i=0; i<size; i++){
        if(a[i] != i+1  ){
            cout << i+1<< " ";
        }
    }
    cout << endl;
}



int main(){
    int size;
    int a[]={1,3,5,3,4};
    size = sizeof(a)/sizeof(int);
    findMissing(a, size);
}