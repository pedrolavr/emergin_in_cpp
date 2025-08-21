#include <iostream>
using namespace std;

int main() 
{

    float num1, num2;
    char operation;

    cout << "========== MASTER CALCULATOR ==========\n";
    cout << "Enter first number: ";
    cin >> num1;
   

    cout << "Enter operation (+, -, *, /, %): \n";
    cin >> operation;
    

    cout << "Enter second number: \n";
    cin >> num2;


    cout << "=======================================\n";

    switch (operation) 
    {
    
        case '-':
            cout << num1 << operation << num2 << " = " << (num1 - num2) << endl;
            break;
        case '+':
            cout << num1 << operation << num2 << " = " << (num1 + num2) << endl;
            break;
        case '*':
            cout << num1 << operation << num2 << " = " << (num1 * num2) << endl;
            break;
        case '/':

            if (num2 != 0) 
            {
                cout << num1 << operation << num2 << " = " << (num1 / num2) << endl;
            } 
            
            else 
            {
                cout << "Error: Division by zero is not allowed.\n";
            }   
            break;


        case '%':

            int num1Int = (int)num1; // Convert num1 to int
            int num2Int = (int)num2; // Convert num2 to int

            bool isNum1Int = (num1Int == num1); // Check if num1 is an integer, but as we convert it to int, we can use it directly
            bool isNum2Int = (num2Int == num2); // Check if num2 is an integer. but as we convert it to int, we can use it directly

        
            if (isNum1Int && isNum2Int && num2 != 0) 
            {

                cout << num1 << operation << num2 << " = " << (num1Int % num2Int) << endl;

            } 
            
            else 
            {
                cout << "Error: Both numbers must be integers and the second number cannot be zero for modulus operation.\n";
            }
            break;
    }
    
    return 0;
}
