#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int height, lenght;
    char symbol;

    cout << "Please, insert the height of the triangle: ";
    cin >> height;

    cout << "Lastly, please select the symbol: ";
    cin >> symbol;

    cout << "Generating the Triangle right below...: \n";

    for (int h = 1; h <= height; h++){
        for (int j = 1; j <= h; j++){
            cout <<  symbol;
            
        }
        cout << endl;
    }

    for (int h = height; h >= 1; h--){
        for (int j = 1; j <= h; j++){
            cout << setw(1) << symbol;
            
        }
        cout << endl;
    }
    

    return 0;
}