#include<iostream>
#include<string> // Required for string type
using namespace std;

int main() {
    int age = 18;                   // Integer type
    string name = "Ravish";         // String type for multiple characters
    bool isAdult = true;            // Boolean type (true/false)
    float cgpa = 8.1;               // Float (single precision decimal)
    double number = 2.88888888888;  // Double (higher precision decimal)

    // Print the variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Adult: " << isAdult << endl;  // prints 1 for true, 0 for false
    cout << "CGPA: " << cgpa << endl;
    cout << "Number: " << number << endl;

    return 0;
}