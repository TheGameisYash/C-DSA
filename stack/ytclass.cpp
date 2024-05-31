#include<iostream>
#include<stack>
using namespace std;

class Stack {
    //properties
    public:
      int *arr;
      int top;
      int size;



    //behaviour
    Stack(int size) {
        this ->size = size;
        arr = new int[size]; 
        top = -1;
     }

    
    void push( int element){
        if(size - top > 1){
            top++;
            arr[top] = element;

        }
        else{
            cout << "Stack Overflow"<< endl;
        }

    }
    
    void pop() {
        if(top >=0){
            top--;

        }
        else{
            cout << "Stack Underflow" << endl;

        }
        
    }
    
    int peek(){
        if(top>=0)
        return arr[top];
        else{
            cout << "Stack is Empty" << endl;
            return -1;
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }

    }


};


int main(){
    
    /*
    // crreation of stack

    stack<int> s;

    //push operation
    s.push(2);
    s.push(3);
    s.push(120);
    s.push(15);
    s.push(20);
    s.push(45);
    s.push(49);
    s.push(99);
    s.push(10);

    //pop
    s.pop();
    

    cout << "printing top element: " << s.top() << endl;

    if(s.empty()){
        cout << "Stack is empty" << endl;

    }
    else{
        cout << "Stack is not empty" << endl;
    }

    cout << "Size of stack is: "<< s.size() << endl;

    */


   Stack st(5);

   

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   st.pop();

   cout << st.peek() << endl;

   if(st.isEmpty()) {
    cout << "Stack is empty mere dost" << endl;

   }
   else{
    cout << "Stack is not empty mere dost" << endl;

   }


}