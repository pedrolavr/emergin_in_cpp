#include <iostream>

using namespace std;

int main() {

    int a = 20;
    int b = 10;

    // I want what my "a" is holding goes to "b" and what "b" is holding goes to "a"
    // We have the glasses analogy, where we swap the contents of two glasses - We can do this using a temporary variable, or without it

    int temp= a; // Store the value of a in temp
    a = b; // Now assign the value of b to a
    b = temp; // Finally, assign the value of temp (original a) to b

    cout << "a = " << a << ", b is equal to " << b << endl;


    // *WITHOUT USING TEMPORARY VARIABLE*
    a = a + b; // Now a holds the sum of both
    b = a - b; // Now b holds the subtraction of the NEW a and the old b, which is the old a
    a = a - b; // Now a holds the subtraction of the NEW a and the NEW b, which is the old b 

    cout << "After swapping without a temporary variable: a = " << a << ", b is equal to " << b << endl;


    return 0;
}