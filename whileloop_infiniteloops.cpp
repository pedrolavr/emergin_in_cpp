#include <iostream>
using namespace std;

int main() {

    // Loops are used to execute a block of code multiple times according to a condition.
    // The while loop continues as long as the condition is true.

    // Syntax of while loop
    // while(condition)
    // { code to be executed while condition is true }

    //Objective : Verify all the numbers bedreen 1 to 100 are odd or even and print the even numbers
    int i = 1;
    
    while (i <= 100) {

        if (i % 2 == 0){
            cout << i << " is an even number" << endl;
        }

         i++;

    }

        

    return 0;
}