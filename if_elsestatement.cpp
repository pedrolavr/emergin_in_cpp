#include <iostream>
using namespace std;

int main() {

    // Let's check the famous odd/even number program using if-else statement
    int number;

    cout << "Let's check if the number you choose is odd or even!" << endl;
    cout << "Please, enter a number: ";
    cin >> number;

    if (number % 2 == 0){
        cout << "The number you choose is even!" << endl;
    }
    else {
        cout << "Eww, the number you choose is odd" << endl;
    }

    return 0;
}