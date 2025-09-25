#include<iostream>
using namespace std;

int main() {
    int a = 12;
    int b = 4;
    char sign1;   // use char, not string

    cout << "Enter operator (+, -, *, /): ";
    cin >> sign1;

    switch(sign1) {
        case '+': 
            cout << a + b;
            break;
        case '-': 
            cout << a - b;
            break;
        case '*': 
            cout << a * b;
            break;
        case '/': 
            cout << a / b;
            break;
        default:
            cout << "Invalid operator";
    }

    return 0;
}