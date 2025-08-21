#include <iostream>
using namespace std;

int main() {
    // User enters their weight and height to calculate BMI
    // The main objective is to calculate the Body Mass Index (BMI)
    // weight(kg) / (height(m) * height(m))
    // Underweight: BMI < 18.5
    // Normal weight: 18.5 <= BMI < 24.9
    // Overweight: 25 <= BMI < 29.9
    // Obesity: BMI >= 30

    float weight, height, bmi;
    int imperialOrMetric;

    cout << "Let's calculate your Body Mass Index (BMI)!\n";

    

    
    cin >> imperialOrMetric;

    while(imperialOrMetric != 1 && imperialOrMetric != 2) {
        cout << "Do you want to use the metric system (kg, m) or the imperial system (lbs, inches)?\n";
        cout << "Enter '1' for metric or '2' for imperial: (1/2)?\n";
        cin >> imperialOrMetric;    
        
        if (imperialOrMetric != 1 && imperialOrMetric != 2) {
            cout << "Invalid input. Please enter '1' for metric or '2' for imperial.\n";
    
            // needs fixing :(

    }

    if (bmi < 18.5) {
        cout << "Your BMI is " << bmi << ", which is considered underweight.\n";
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Your BMI is " << bmi << ", which is considered normal weight.\n";
    }
    else if (bmi >= 25 && bmi < 29.9) {
        cout << "Your BMI is " << bmi << ", which is considered overweight.\n";
    }
    else {
        cout << "Your BMI is " << bmi << ", which is considered obese.\n";
    }
}
