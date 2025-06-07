/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:A program that calculates simple interest using functions.
Date: 05/06/2025
version 1
*/
#include <iostream>
#include <cmath>
using namespace std;

float simple_interest(float principal, float rate, float time) {
    return (principal * rate * time) / 100;
}

int main() {
    float principal, rate, time, interest;

    cout << "Enter Principal Amount: ";
    cin >> principal;

    cout << "Enter Rate of Interest: ";
    cin >> rate;

    cout << "Enter Time in years : ";
    cin >> time;

    interest = simple_interest(principal, rate, time);

    cout << "Simple Interest = " << interest << endl;

    return 0;
}
