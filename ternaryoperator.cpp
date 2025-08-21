#include <iostream>
using namespace std;

int main() {

    int hostUserInput, guestUserInput;

    cout << "Host: ";
    cin >> hostUserInput;

    system("cls"); // Clear the console to hide host input

    cout << "Guest: ";
    cin >> guestUserInput;


    /*    USING IF-ELSE STATEMENT
    
    
    if (hostUserInput == guestUserInput) {
        cout << "THAT'S CORRECT! YOU WIIIN!\n";
    } 
    else {
        cout << "WRONG! The correct number was " << hostUserInput << ".\n";
    }
    
    */

    //    USING TERNARY OPERATOR

    (hostUserInput == guestUserInput) ? cout << "THAT'S CORRECT! YOU WIIIN!\n" : cout << "WRONG! The correct number was " << hostUserInput << ".\n";

    // Ternary operator syntax: (condition) ? expression_if_true : expression_if_false;
    // The ? is used to check if the condition is true or false.
    // If true, the expression after the ? is executed.
    // If false, the expression after the : is executed.
    


    return 0;
}