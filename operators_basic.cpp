#include <iostream>
#include <cmath>
#include <windows.h> // Include Windows header for system calls like system("pause>0")
using namespace std;

int main() {
    // This program demonstrates basic arithmetic operators in C++

    // +, -, *, /, %

    cout << 5/2 << "\n"; // Integer division, result is 2 (dividing of 2 whole numbers will result in an integer (another whole number))
    cout << 5 + 1 << "\n";
    cout << 5 - 1 << "\n";
    cout << 5 * 2 << "\n";
    cout << 5 % 2 << "\n"; // Modulus operator, gives the remainder of the division, in this case it is 1

    //++, -- are increment and decrement operators

    int counter = 5;
    cout << counter++ << "\n"; // Post-increment, prints 5, then increments x to 6, so you will only see 5 in the output

    cout << counter << "\n"; // Now it will print 6, because we incremented it in the previous line

    // We could also do a pre-increment, which would increment the value before printing it
    cout << ++counter << "\n"; // Pre-increment, increments counter to 7, then prints it

    // <, >, <=, >=, ==, != are comparison operators ("if are they equal", "if is greater than", etc.)

   }


