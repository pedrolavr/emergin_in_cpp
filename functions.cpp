#include <iostream>

using namespace std;


void functionName(){ // This function "void type" does not return anything
    
    cout << "Hello from functionName" << endl;

} 

int main () { // For example, main() is a function

    // Functions are only executed when you call for it
    // It is a block of code that can be executed at any time (usually, solves a specific problem)

    cout << "Hello from Main function()" << endl;
    functionName(); // To invoke any function, just put the name followed by ();

    // However, please note that the functions follow top-bottom order, so it must be initialized before the int main()
    // Moreover, you can declare the function on top, and then define function after int main()


    return 0;
}