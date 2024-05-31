#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;

    while(!q.empty()) {
        int frontElement = q.front();
        q.pop();
        
        s.push(frontElement);
    }
}


int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    q.push(80);

    reverseQueue(q);
    return 0;
}