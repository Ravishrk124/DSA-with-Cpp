#include<iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter age: ";
    cin >> age;

    string isadult = (age >= 18) ? "Yes" : "No"; // ternary operator
    cout << "Adult? " << isadult << endl;

    return 0;
}