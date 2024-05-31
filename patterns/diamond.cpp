// #include<iostream>
// using namespace std;

// int main() {
// 	char c;
//     cin>>c;
//     if('a'<=c && c<= 'z'){
//         cout<<0;
//     }
// 	else if('A'<=c && c<= 'Z'){
//         cout<<1;
//     }
//     else{
//         cout<<-1;
//     }
// }


/*
Pattern
1
23
345
4567
*/


// #include<iostream>
// using namespace std;


// int main(){
//     int n;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     int i=1;
//     while(i<=n){
//         int j = i,count = 1;
//         while(count<=i){
//             cout<<j;
//             j = j + 1;
//             count = count + 1;
//         }
//         cout<<"\n";
//         i = i + 1;
//     }
// }


/*
Pattern
N = 4
   *
  ***
 *****
*******
*/
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     for(int i = 0; i<n; i++){
//         //print space
//         for (int j = 0; j<n-i-1; j++){
//             cout<<" ";
//         }
//         //print stars
//         for (int j=0; j<2*i+1; j++){
//             cout << "*";
//         }
//         cout << endl;
//     }
// }


/*
Pattern
N = 4
1
22
333
4444
*/
#include<iostream>
using namespace std;

int main(){
  int i,j,n;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
	        cout<<i;
        }
    cout<<endl;
    }
}