#include<iostream>   // Include input-output stream library
using namespace std; // So we don’t have to write std::cout, std::cin

int main() {
    int adult = 18;  // Threshold age for adulthood (constant reference)
    int age;         // Variable to store user input

    // Prompt the user to enter their age
    cout << "Enter Your Age = ";

    // Take input from keyboard and store it in 'age'
    cin >> age;

    // Check if the entered age is less than 18
    if(age < adult) {
        cout << "Not Adult" << endl;  // If true → print "Not Adult"
    }
    else {
        cout << "Is Adult" << endl;   // Otherwise → print "Is Adult"
    }
    

    return 0; // End of program, return 0 indicates successful execution
}