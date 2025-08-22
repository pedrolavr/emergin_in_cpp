#include <iostream>

using namespace std;

int main(){
    // Structure : 

    // do {
    // code to be executed
    // } while (this condition is true)


    
    // The main difference between do-while loop x while loop is that in do-while, you you execute first the block code, and then you check
    // In other hand, in while loop you will check first, and then execute if it meets the condition



    // Let's use as example a PIN code

    int user00001PIN = 1244, pin, errorCounter = 0;
    // We'll give the user 3 attempts

    do{
        cout << "PIN: ";
        cin >> pin;

        if (pin != user00001PIN){
            cout << "The PIN is incorrect, please try again\n";
            errorCounter++;
        }
        
    } while(errorCounter < 3 && pin!=user00001PIN);

    if (errorCounter < 3){
        cout << "Acess Granted";
    }
    else {
        cout << "Acess denied, too many attempts";
    }


}