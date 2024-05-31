#include <iostream>
using namespace std;

int main(){


    int arr[]= {2,3,4,5,6,7};

    int brr[5] = {1,2,3,4,5};

    int crr[5] = {2,3};

    //error because only 2 memory blocks allocated and user defined 6 blocks
    int drr[2] = {1,2,3,4,5,6};

    cout << "array created successfully" << endl;

}