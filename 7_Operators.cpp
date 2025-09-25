#include<iostream>
using namespace std;

int main() {
    // ---------- Binary Operators ----------
    int x = 10, y = 3;

    cout << "x = " << x << ", y = " << y << endl;
    cout << "x + y = " << x + y << endl;  // Addition: 10+3=13
    cout << "x - y = " << x - y << endl;  // Subtraction: 10-3=7
    cout << "x * y = " << x * y << endl;  // Multiplication: 10*3=30
    cout << "x / y = " << x / y << endl;  // Division: 10/3=3 (int division)
    cout << "x % y = " << x % y << endl;  // Modulus: remainder of 10/3=1

    cout << "-------------------------------" << endl;

    // ---------- Unary Operators ----------
    int a = 5, b = 5;

    cout << "Initial: a = " << a << ", b = " << b << endl;

    int postA = a++;   // Post-increment: assign old value, then increase
    cout << "After post-increment (a++): postA = " << postA << ", a = " << a << endl;

    int preB = ++b;    // Pre-increment: increase first, then assign
    cout << "After pre-increment (++b): preB = " << preB << ", b = " << b << endl;

    int postDec = a--; // Post-decrement: assign old value, then decrease
    cout << "After post-decrement (a--): postDec = " << postDec << ", a = " << a << endl;

    int preDec = --b;  // Pre-decrement: decrease first, then assign
    cout << "After pre-decrement (--b): preDec = " << preDec << ", b = " << b << endl;

    cout << "-------------------------------" << endl;

    // ---------- Assignment Operators ----------
    int x1 = 10, y1 = 20;

    cout << "Initial: x1 = " << x1 << ", y1 = " << y1 << endl;

    x1 += 10;  // x1 = x1 + 10 → 20
    y1 -= 10;  // y1 = y1 - 10 → 10

    cout << "After x1 += 10 → " << x1 << endl;
    cout << "After y1 -= 10 → " << y1 << endl;

    x1 /= 2;   // x1 = x1 / 2 → 20/2 = 10
    y1 *= 2;   // y1 = y1 * 2 → 10*2 = 20

    cout << "After x1 /= 2 → " << x1 << endl;
    cout << "After y1 *= 2 → " << y1 << endl;

    cout << "-------------------------------" << endl;

    // ---------- Relational Operators ----------
    int a1 = 10;
    int b1 = 20;

    cout << "a1 = " << a1 << ", b1 = " << b1 << endl;

    cout << "a1 == b1 → " << (a1 == b1) << endl; // false → 0
    cout << "a1 != b1 → " << (a1 != b1) << endl; // true → 1
    cout << "a1 > b1  → " << (a1 > b1)  << endl; // false → 0
    cout << "a1 < b1  → " << (a1 < b1)  << endl; // true → 1

    cout << "-------------------------------" << endl;

    // ---------- Logical Operators ----------
    cout << "(3 < 4) && (4 < 2) → " << ((3 < 4) && (4 < 2)) << endl; // true && false = false (0)
    cout << "(3 < 4) || (4 < 2) → " << ((3 < 4) || (4 < 2)) << endl; // true || false = true (1)
    cout << "!(4 > 2) → " << (!(4 > 2)) << endl;                     // !(true) = false (0)

    return 0;
}