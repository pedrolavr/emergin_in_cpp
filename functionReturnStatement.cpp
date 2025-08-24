#include <iostream>

using namespace std;

// There are some functions that return values and other not return
// Function can return only one value

// We are going to create a program to define if a number is a prime number or not (only divisible by 1 and itself)
bool isPrimeFunction(int num){

    bool isPrimeFlag = true;
    for (int i = 2; i < num; i++){
        if(num%i==0){
            isPrimeFlag = false;
            cout << "Unfortunately, it is not a prime number :(";
            break;
            // Also, we could delete the 3 lines above and place "return false" - It would end the the loop and the function
        }
    }
    return isPrimeFlag; //This will return the answer of the function (question)
}

int main(){

    int numberMain;
    cout << "Number: ";
    cin >> numberMain; 

    

    /* for (partindo de x; vamos até y; operando de "tanto em tanto")

    for (int i = 2; i < number; i++){
        if(number%i==0){
            isPrimeFlag = false;
            cout << "Unfortunately, it is not a prime number :(";
            break;
        }
    }

    This piece of code could be right here, but we will create a funcion isPrimeFunction and just call it :)

    */

        bool isPrimeFlag = isPrimeFunction(numberMain); // Here, we are assigning the bool isPrimeFlag to the return of isPrimeFunction
        
        if (isPrimeFlag == true){
            cout << "This is a prime number \n";
        }

    return 0;
}