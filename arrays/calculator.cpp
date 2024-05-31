#include <iostream>
using namespace std;


int main() {
    char operation;
    double num1, num2;

    cout << "Enter an Operation (+, -, /, *): ";
    cin >> operation;

    cout << "Enter First number:  ";
    cin >> num1;

    cout << "Enter Second number:  ";
    cin >> num2;

    switch (operation)
    {
    case '+':
        cout << "Your answer is: " << num1 + num2 << endl;
        break;
    
    case '-':
        cout << "Your answer is: " << num1 - num2 << endl;
        break;

    case '/':
        cout << "Your answer is: " << num1 / num2 << endl;
        break;
    
    case '*':
        cout << "Your answer is: " << num1 * num2 << endl;
        break;
        
    
    default:
        cout << "Invalid Operation" << endl;
        break;
    }




}