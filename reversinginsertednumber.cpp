#include <iostream>
using namespace std;

int main() {
    // Reversing number

    long long number;
    long long reversedNumber = 0;

    cout << "Please, insert a number, and I'll reverse it: \n";
    cin >> number;
    long long confirmNumber = number;

    while (number != 0){
        int lastDigit;
        reversedNumber = reversedNumber * 10; // This will add another digit to the number
        lastDigit = number % 10;  //This will provide us the last digit of the whole number
        reversedNumber = reversedNumber + lastDigit;
        number = number / 10; // This will eliminate the last number from the original inserted number
    }

    if (reversedNumber == confirmNumber){
        cout << "Wow, it seems like my work was not necessary here haha!\n";
    }
    else{
        cout << "Your reversed number is: " << reversedNumber << endl;
    }
}