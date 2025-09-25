#include<iostream>
using namespace std;

int main() {
    // ---------- Implicit Type Casting ----------
    cout << 10/3 << endl;     // int / int → int division → 3
    cout << 10/3.0 << endl;   // int / double → promotes to double → 3.33333
    cout << 4 + 'A' << endl;  // 'A' = 65 (ASCII), so 4 + 65 = 69
    cout << true + 4 << endl; // true = 1, so 1 + 4 = 5

    // ---------- Explicit Type Casting ----------
    cout << (double)(7/2) << endl;  // 7/2 = 3 (int), then cast to double → 3.0
    cout << (double)7/2 << endl;     // 3.5 (cast before → floating division)
    cout << (int)((double)7/2) << endl; // 3 (floating division → then cast down to int)    
    cout << (int)(7/2.0) << endl;   // 7/2.0 = 3.5 (double), cast to int → 3
    cout << (char)('A' + 2) << endl; // 'A'=65, +2=67 → char(67) = 'C'
    cout << (bool)(true+1) << endl;  // true=1, 1+1=2 → bool(2) = true (prints 1)

    return 0;
}