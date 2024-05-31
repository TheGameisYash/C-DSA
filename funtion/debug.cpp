#include<iostream>
using namespace std;

// int main() {
// 	double width, height;
// 	cin >> width >> height;
// 	double area = width * height;
// 	cout << area << endl;
// 	return 0;
// }

// int main() {
//     int n,sum=0,factor=1;
//     cin>>n;
//     while(n!=0){
//         int digit = n%10;
//         sum = sum + digit*factor;
//         factor = 2*factor;
//         n = n/10;
//     }
//     cout<<sum;
//     return 0;
// }

// float circle_area(float radius){
//     float area = 3.14 * radius * radius;
//     return area;
// }

// void fact(long long int n){
//     long long int fact = 1;
//     for(int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     cout << "Factorial of: "<< n << " is " << fact << endl;
    
// }

// bool checkPrime(int n){
//     int i = 2;
//     for(i=2; i<n; i++){
//         if(n%i == 0){
//             return false;
            
//         }
//     }
//    return true;
    
// }

// int countSetBit(int n){
//     int count = 0;
//     // while(n > 0){
//     //     int bit = n % 2;
//     //     if(bit == 1){
//     //         count++;
//     //     }
//     //     n = n/2;
//     // }
//     while(n > 0){
//         int bit = (n & 1);
//         if(bit == 1){
//             count++;
//         }
//         n = n >> 1;
//     }
//     return count;
// }

int createNumberUsingDigits(int numberOfDigits){
    int num = 0;
    for(int i=0; i<numberOfDigits; i++){
        cout << "enter digit: "<< endl;
        int digit;
        cin >> digit;
        num = num * 10 + digit; 
        cout << "Number Created so far: "<< num << endl;
    }
    return num;
}

int main(){
    // float radius;
    // cin>> radius;
    // float area = circle_area(radius);
    // cout << "Area of circle is: " << area << endl;
    // fact(15);
    
    
    // int n;
    // cout << "Enter Your Number to Check Prime or Not: \n";
    // cin >> n;
    // bool isPrime = checkPrime(n);
    // if(isPrime){
    //     cout << "Its a Prime Number\n";
    // }
    // else{
    //     cout << "Its not a Prime Number\n";
    // }

    // int n;
    // cin >> n;
    // for(int i=2;i<=n;i++){
    //     bool isiPrime = checkPrime(i);
    //     if(isiPrime){
    //         cout << i << "  ";
    //     }
    // }
    
    
    // int n; cin >> n;
    // int setBitCount = countSetBit(n);
    // cout<< setBitCount<< endl;

    int numberOfDigits;
    cin >> numberOfDigits;
    int num = createNumberUsingDigits(numberOfDigits);
    cout << "Number created by digits: "<< num << endl;

}