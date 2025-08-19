#include <iostream>
#include <iomanip>
using namespace std;

int main() {


    cout << (int)'a' << endl; // This is called casting, converting char to int in this case
    cout << int('a') << endl; // Same as above, casting char to int

    cout << int('A') << endl; // Casting char 'A' to int, which will give 65 instead of 97

    cout << char(65) << endl; // Casting int 65 to char, which will give 'A'
    //However, this is not the best way to do it, because it is not clear what you are doing

    cout << static_cast<char>(65) << endl; // This is the best way to cast in C++, it is clear and safe


    // In this case, let's create a program that convert words to ASCII

    char c1, c2, c3, c4, c5;
    // same as declare each one separately (this is more compact)

    cout << "Enter 5 characters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    // We can use cin to read multiple characters at once, separated by spaces
    // Also, it does not recognize spaces, so if you enter "a b c d e", it will only read 'a', 'b', 'c', 'd', 'e' as separate characters
    

    cout << "ASCII message: " << int(c1) << " " << int(c2) << " "
         << int(c3) << " " << int(c4) << " " << int(c5) << endl;

    // We can use int() to convert char to int, which will give us the ASCII value of each character



    return 0;
}