#include <iostream> 

using namespace std;

int main(){

    //Objective : Calculate the factorial number the number entered

    
    int number;
    int factorial = 1;

    cout << "Please, insert a number: ";
    cin >> number;

    int initialNumber = number;

    /* Structure : 

    for (int i (counter); condition (LIMITER); operation) { 

       *Code to be executed while the condition is not satisfied*
    }

    */

    for (int i = number; i >= 1 ; i--){
        factorial = factorial*i;
    }

    cout << "Factorial of " << initialNumber << " is: " << factorial << endl;

    return 0;
}