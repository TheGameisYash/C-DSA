#include <iostream>
using namespace std;

void printArray(int arr[], int size) {
        

    
    cout<<" printing the Array" << endl;
    
    for(int i=0; i<size; i++){
        cout << arr[i]<< " ";

    }
    cout << "Printing done" << endl;

   
}





int main(){

    
    int second[3] = { 5, 7, 11};
    

    // cout << "Value at 2 index is  " << second[2] << endl;

    
    int third[15] = {2,7};
    int n =15;
    // printArray(third, 15);
    int thirdSize = sizeof(third)/sizeof(int);
    cout << "Size of third is " << thirdSize << endl;
    

    int fourth[10] = {0};
    n =10;
    // printArray(fourth, 10);

    int fifth[10] = {1};
    n = 10;
    // printArray(fifth, 10);


    int fifthSize = sizeof(fifth)/sizeof(int);
    cout << "Size of Fifth is " << fifthSize << endl;

    char ch[5] = {'a', 'b','p','D','O'};
    cout << ch[3] << endl;
    cout<<" printing the Array" << endl;
    
    for(int i=0; i<5; i++){
        cout << ch[i]<< " ";

    }
    cout << "Printing done" << endl;


    double firstDouble[5];
    float firstFloat[6];
    bool firstBool[100];

    

    

    
}