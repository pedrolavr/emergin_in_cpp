#include <iostream>
using namespace std;

int main() {
    // Our objective : Count the digits of a number

    long long number;
    
    cout << "Please, insert a number \n";
    cin >> number;

    if (number == 0){

         cout << "You have entered 0.\n";
    }
    else {

        int counter = 0;
        while (number > 0){
            number = number / 10; //This will make the number reduce to a decimal number, it will round to a whole number eliminating the decimal part since it is an integer
            counter++;
        }
        
        cout << "The number you send has " << counter << " digits \n";
    }
}