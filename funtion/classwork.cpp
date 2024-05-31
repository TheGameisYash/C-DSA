#include<iostream>
#include <algorithm>
using namespace std;

// void input(int ^a,int ^b,int ^c){
//     cout << "enter values: "<< endl;
//     cin >> a >> b >> c;
    
// }


// void printsum(int a,int b,int c){
//     int answer = a + b + c;
//     cout << "Sum is: "<< answer << endl;
// }

// int printmsg(string name){
//     for(int i=0; i<=5; i++){
//         cout << " " << name << endl;
//     }
// }

// int findmax(int num1,int num2,int num3){
//     // int ans= max(a, max(b,c));
//     int ans1 = max(num1,num2);
//     int finalans = max(ans1,num3);
//     // cout << finalans << " is the largest number";
//     return finalans;

// }
// void counting(int n){
//     for(int i=0; i<=n; i++)
//     cout << i << endl;
// }

// int chkprime(){
//     for(int i=2; )
// }

// void checkEvenorOdd(){
//     int num;
//     cout << "Enter Number: "<< endl;
//     cin >> num ;
//     if(num  % 2 == 0){
//         cout << "Even Number"  << endl;
//     }
//     else{
//         cout << "Odd number" << endl;
//     }
// }

// void findSumUptoN(int n){
//     int sum = 0;
//     for(int i=1; i<=n; i++){
//         sum = sum + i;
//     }
//     cout << "Final Sum: "<< sum << endl;

// }

// void findSumEvenUptoN(int n){
//     int sum = 0;
//     for(int i=2; i<=n; i=i+2){
//         sum = sum + i;
//     }
//     cout << "Final Sum: "<< sum << endl;

// }

bool checkPrime(int n) {
    for(int i=2; i<n; i++){
        if(n%i ==0){
            return false;
        }
    }
    return true;
}





int main(){
    // int a,b,c;
    // input(a,b,c);
    // printsum(5,5,9);
    // printmsg("hello");
    //  int answer = findmax(60,180,95);
    //  cout << "Maximum is: "<< answer << endl;
    // counting(200);
    // checkEvenorOdd();
    // findSumUptoN(100);
    // findSumEvenUptoN(10);
    bool prime = checkPrime(1);
    if(prime){
        cout << "Its a prime number: " << endl;
    }
    else {
        cout << "Its not a prime number" << endl;
    }
    
   



}