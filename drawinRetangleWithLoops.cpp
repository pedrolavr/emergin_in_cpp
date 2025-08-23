#include <iostream>
#include <iomanip> // This library is used to format output, for example to set precision or fill characters

using namespace std;
 
int main(){

    int height, width;
    char symbol;

    cout << "Please, insert the Height: ";
    cin >> height;

    cout << "Now, please insert the widht: ";
    cin >> width;
    
    cout << "Awesome, now please choose a symbol ";
    cin >> symbol;

    for (int h = 0; h < height; h++){
        for (int w = 0; w < width; w++){
            cout << setw(3) << symbol; // This is just for aesthetic look - Not necessarily functional
        }
        cout << endl;
    }

    return 0;
}
    
