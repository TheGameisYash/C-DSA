#include<iostream>
#include<queue>
using namespace std;

int main() {
    string str = "ababc";
    queue<char> q;
    int freq[26] = {0};

    for(int i=0; i<str.length(); i++){
        char ch = str[i];
        freq[ch-'a']++;
        q.push(ch);


        // answer find karo

        while(!q.empty()){
            char frontCharacter = q.front();
            if(freq[frontCharacter-'a'] > 1){
                q.pop();
            }
            else {
                //yehi answer hai 
                cout << frontCharacter << "->";
                break;
            }
        }
        if (q.empty()){
            cout << "#" << endl;
        }
    }
}



// class Solution {
// public:
//     int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
//         int deficit = 0;
//         int balance = 0;

//         int start = 0;

//         for (int i=0; i<gas.size(); i++){
//             balance = balance + gas[i] - cost[i];

//             if(balance < 0) {
//                 deficit += abs(balance);
//                 start = i+1;
//                 balance = 0;
//             }
//         }
//         if(balance - deficit >= 0){
//             return start;

//         }
//         else {
//             return -1;
//         }
//     }
// }


