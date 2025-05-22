/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Implementing grading system 
Date: 22/05/2025
version 1
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    string subject1, subject2, subject3;
    float mark1, mark2, mark3, average;
    char grade;

  
    cout << "Enter marks for Mathematics " << subject1 << ": ";
    cin >> mark1;

    cout << "Enter marks for Science" << subject2 << ": ";
    cin >> mark2;

    cout << "Enter marks for Kiswahili " << subject3 << ": ";
    cin >> mark3;

   
    average = (mark1 + mark2 + mark3) / 3;

    
    if (average >= 70 && average <= 100) {
        grade = 'A';
    } else if (average >= 60) {
        grade = 'B';
    } else if (average >= 50) {
        grade = 'C';
    } else if (average >= 40) {
        grade = 'D';
    } else {
        grade = 'E';
    }

   
    
    cout << "Average: " << average << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
