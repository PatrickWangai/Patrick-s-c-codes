/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Determining bonus earned depending on salary and years of service 
Date: 22/05/2025
version1
*/

#include <iostream>
using namespace std;

int main() {
    float salary, years_of_service, bonus, total_salary;

    cout << "Enter your salary and years of service" << endl;
    cin >> salary >> years_of_service;

    if (years_of_service > 10) {
        bonus = 0.1 * salary;
    }
    else if (years_of_service >= 6 && years_of_service <= 10) {
        bonus = 0.08 * salary;
    }
    else {
        bonus = 0.06 * salary;
    }

    total_salary = bonus + salary;

    cout << "The Net Bonus: " << bonus << endl;
    cout << "The total salary is: " << total_salary << endl;

    return 0;
}
