/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Displaying values entered by the user.
Date: 05/12/2025
version 1
*/
#include <iostream>
#include <cmath>
using namespace std;

class Employee {
public:
    int idno;
    string name;
    string occupation;
};

int main() {
    Employee employee1;

    cout << "Enter your identification number: ";
    cin >> employee1.idno;
    cin.ignore(); // Clear newline from input buffer

    cout << "Enter Name: ";
    getline(cin, employee1.name); // Use getline to allow full name input

    cout << "Enter your occupation: ";
    getline(cin, employee1.occupation);

    // Displaying
    cout << "\nYour ID number is: " << employee1.idno << endl;
    cout << "Your name is: " << employee1.name << endl;
    cout << "Your occupation is: " << employee1.occupation << endl;

    return 0;
}