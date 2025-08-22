#include <iostream>

using namespace std;

int main(){

    // This program will define how many days are in a month of a year
    // We must follow the rules of the Gregorian calendar 
    // (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) - A leap year
    // February has 29 days in a leap year and 28 days otherwise


    int year, month;

    cout << "Enter year: \n";
    cin >> year;

    cout << "Enter month (1-12): \n";
    cin >> month;

    switch (month)
    {
    case 2: (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0) ? 
        cout << "February has 29 days " << year << endl: 
        cout << "February has 28 days " << year << endl;
        break; //After reach break, it will exit the switch statement

    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "This month has 31 days" << endl;
        break;
    case 4: case 6: case 9: case 11:
        cout << "This month has 30 days" << endl;
        break; 
    default:
        cout << "Invalid month! Please enter a month between 1 and 12." << endl;
        break;
    }

}