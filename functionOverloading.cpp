#include <iostream>

using namespace std;

//Function Overloading - You can create multiple functions with the same name, but those functions will have different parameters

int sumFunction (int a, int b);
double sumFunction (double a, double b);
float sumFunction (float a, float b, float c);


int main() { 

    cout << sumFunction(4,3) << endl;
    cout << sumFunction (7.5, 8.8) << endl;
    cout << sumFunction (4.3, 2.5, 6.8) << endl;
    return 0;
}


int sumFunction(int a, int b){
    return a + b;
    // int result = a + b;
    // return result;
}

double sumFunction(double a, double b){
    return a + b;
}

float sumFunction (float a, float b, float c){
    return a+b+c;
}



