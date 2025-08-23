#include<iostream>

using namespace std;

void introduceMe(string name, int age, int balanceAmount){
    cout << "My name is " << name << endl;
    cout << "I'm " << age << " years old \n";
    cout << "My account balance is: $" << balanceAmount << " dollars";
}

int main(){

    int monetaryAmount;
    cout << "Please, insert your monetary amount: ";
    cin >> monetaryAmount;

    introduceMe("Pedrolavr", 18, monetaryAmount); // Notice how the parameter is set and replaced by what is inside ()

}
