#include<iostream>
using namespace std;

void temp(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
   
}

void arithmetic(int& a, int& b){
    a = a+b;
    b = a - b;
    a = a - b; 
    
    
}

void xoor(int& a, int& b){
    a = a^b;
    b = a^b;
    a = a^b;
}

int main(){
    int a, b;
    cout << "Enter Two numbers: "<< endl;
    cin >> a >> b;
    cout << "Before swapping:  a = "<< a << ", b = " << b << endl;
    // temp(a,b);
    // arithmetic(a, b);
    xoor(a, b);
    cout << "After swapping:  a = "<< a << ", b = " << b << endl;
}