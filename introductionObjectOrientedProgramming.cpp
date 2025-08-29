#include <iostream>
#include <list>

using namespace std;

    // Finally, we are going to talk about OOP
    // The most important concepts are classes and object
    // Class - Is going to represent a template (A BLUEPRINT) - Fruit
    // Object - An example of the class  -  Apple (Have taste, color, size, cost, etc.)

class Fruit { //A class, is a user-defined datatype - Allow you to represent a rea-life object in the program
    public:
    string Color;
    string Taste;
    int Size;
    list<string> where_is_cultivated;

    private: // Note that we cannot access it in the main function, since it is private
    float Cost;

}; //Don't forget the ;

int main (){

    Fruit apple; //Generate an object called apple of the class Fruit
    apple.Color = "Red";    // By default, all the members in a class are private - That is why we put public: into the class 
    apple.Taste = "Sweet";
    apple.Size = 5;
    apple.where_is_cultivated = {"USA ", "Brazil ", "Chile "};

    cout << "Apple color: " << apple.Color << endl;
    cout << "Where is it cultivated: \n";
    for(string cultivated: apple.where_is_cultivated){  //In order to cout a list, you need to put in a loop

        cout << cultivated << endl;

    }

    return 0;
}