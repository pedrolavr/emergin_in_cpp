#include <iostream>
using namespace std;

int main() {

    // we got float (write f is not necessary for f in C++), chat, int, double, bool, long, short, string, etc.
    // Here are the summary of some basic data types in C++


    int number = 10; // Int is usually 4 bytes, it can hold values from -2,147,483,648 to 2,147,483,647 (this difference is because of 0 is included in the positive numbers)
    short smallNumber = 5; // Short is usually 2 bytes, that is why it is helpful to save memory
    long bigNumber = 100000L; // Long is usually 4 bytes, but can be more depending on the system
    long long veryBigNumber = 10000000000LL; // Long long is usually 8 bytes, as the double
    char gender = 'f'; // Char is usually 1 byte, it can hold a single character
    bool isOnGround = true; // Bool is usually 1 byte, it can hold true or false
    float averageScore = 85.5f; // Float is usually 4 bytes, it can hold decimal values and the maximum value is around 3.4E+38
    double pointsToNextLevel = 123456.789; // Same as long long (8 bytes), however it can hold decimal values, so it is gathering float and long long features

    // Each data type occupies a certain amount of memory, you can check it with sizeof()

    cout << "Size of Points to next level is: " << sizeof(pointsToNextLevel) << " bytes" << endl;



    return 0;
}


