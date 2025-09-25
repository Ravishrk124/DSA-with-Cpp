#include<iostream>
using namespace std;

int main(){
    int age;
    
    cout << "Enter Your Age: ";
    cin >> age;

    if(age >= 45){
        cout << "Can Vote and Can Contest Elections" << endl;
    }
    else if(age >= 18){
        cout << "Can Vote but Cannot Contest Elections" << endl;
    }
    else {
        cout << "Cannot Vote" << endl;
    }

    int number;
    cout << "Enter Number: ";
    cin >> number;

    if(number % 2 == 0){
        cout << "Even" << endl;
    }
    else {
        cout << "Odd" << endl;
    }

    return 0;
}