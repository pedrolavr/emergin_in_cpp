#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // User enters the respective triangles' sides
    // The main objective is to check if the triangle is equilateral, isosceles, or scalene

    float sideA, sideB, sideC;
    

    cout << "Let's check the type of triangle based on its sides!\n";
    cout << "Please, enter the sides A, B and C respectively of the triangle: ";
    cin >> sideA >> sideB >> sideC;

    float powA = pow(sideA, 2);
    float powB = pow(sideB, 2);
    float powC = pow(sideC, 2);

    // Using if-else to determine the type of the triangle

    float maxSide = max(sideA, max(sideB, sideC));

    if (sideA + sideB <= maxSide || sideA + sideC <= maxSide || sideB + sideC <= maxSide){
        cout << "The sides do not form a triangle\n";

    } 


    else 
    { 

        if (powA + powB == powC)
        {
            cout << "The triangle is right-angled\n";


        if (sideA == sideB && sideB == sideC){

        cout << "The triangle is equilateral\n";
        }

    else if(sideA == sideB || sideB == sideC || sideA == sideC){
        cout << "The triangle is isosceles\n";

        }

    else{
        cout << "The triangle is scalene\n";

        }
   }

   else {

    if (sideA == sideB && sideB == sideC){

        cout << "The triangle is equilateral" << "\n";
        }

    else if(sideA == sideB || sideB == sideC || sideA == sideC){
        cout << "The triangle is isosceles" << "\n";

        }

    else{
        cout << "The triangle is scalene" << "\n";

        }

   }
    

    return 0;
        
    }
}