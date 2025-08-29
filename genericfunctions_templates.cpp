#include <iostream>
using namespace std;

/*

void Swap (int& a, int& b) {
    // Note that, as we need to invoke both variables a and b in any function we have, we put & together with the variable name
    // Then, we will send the reference

    int temp = a;
    a = b;
    b = temp;
    //Swapping values
}


int Swap (char& a, char& b){ //Using function overloading - Then, the computer itself will recognize with the same function Swap if it is int or char
    char temp = a;
    a = b;
    b = temp;


}


However, although it is correct, please note that the this is a code repetition (which we need to avoid)
In this case, we'll create a template as the below :

*/

template<typename T>

// This T means a generic data type
// Now, the function below is a generic function

void Swap (T& a, T& b) {

    T temp = a;
    a = b;
    b = temp;
}

int main(){


    int a=5, b=7;

    cout << a << " - " << b << endl;
    //Now in the function, we'll change and place <"datatype"> to specify
    Swap<int>(a,b);
    cout << a << " - " << b << endl;


    char c='c', d = 'd';
    cout << c << " - " << d << endl;
    Swap<char>(c,d);
    cout << c << " - " << d << endl;

    return 0;
}