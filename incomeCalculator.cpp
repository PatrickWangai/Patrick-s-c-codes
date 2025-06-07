/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Calculating Gross pay,Tax and Netpay using hours worked and hourly wage of a user.
Date: 05/06/2025
version 1
*/
#include <iostream>
using namespace std;

// Function to calculate gross pay
float calculateGrossPay(float hours, float rate) {
    if (hours <= 40) {
        return hours * rate;
    } else {
        float overtime = hours - 40;
        return (40 * rate) + (overtime * rate * 1.5);
    }
}

// Function to calculate tax
float calculateTax(float grossPay) {
    if (grossPay <= 600)
        return 0.15 * grossPay;
    else
        return (0.15 * 600) + (0.20 * (grossPay - 600));
}

// Function to calculate net pay
float calculateNetPay(float grossPay, float tax) {
    return grossPay - tax;
}

int main() {
    float hours, rate, grossPay, tax, netPay;

    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter hourly wage: ";
    cin >> rate;

    grossPay = calculateGrossPay(hours, rate);
    tax = calculateTax(grossPay);
    netPay = calculateNetPay(grossPay, tax);

    cout << "\nGross Pay: $" << grossPay << endl;
    cout << "Tax: $" << tax << endl;
    cout << "Net Pay: $" << netPay << endl;

    return 0;
}