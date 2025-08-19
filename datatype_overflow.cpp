#include <iostream>
#include <limits.h> // More used in C, it is legacy ⛔
#include <climits> // Used for limits in integer types in C++
#include <limits> // This one is used for numeric limits in C++

using namespace std;

int main() {
    // Let's explore how overflow can occur with different data types in C++

    int intMax = INT_MAX; // This INT_MAX is defined in <limits.h> or <climits>
    cout << intMax << endl; // Maximum value for int

    cout << intMax + 1 << endl; // This will cause overflow, wrapping around to the negative range


}