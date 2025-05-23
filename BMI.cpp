/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Calculating BMI of an individual
Date: 22/05/2025
version 1
*/
#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

   
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in meters: ";
    cin >> height;

    
    bmi = weight / (height * height);

    
    cout << "Your BMI is: " << bmi << endl;

    
    if (bmi < 18.5) {
        cout << "Underweight" << endl;
    } else if (bmi >= 18.5 && bmi <= 24.9) {
        cout << "Normal weight" << endl;
    } else if (bmi >= 25 && bmi <= 29.9) {
        cout << "Overweight" << endl;
    } else {
        cout << "Obesity" << endl;
    }

    return 0;
}
    