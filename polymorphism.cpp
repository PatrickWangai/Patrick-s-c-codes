/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description: Example of polymorphism
Date: 15/07/2025
version 1
*/
#include <iostream>
#include <cmath>
using namespace std;


class Shape {
public:
    virtual void area() {
        cout << "Area calculation not defined for generic shape" << endl;
    }

    
    virtual ~Shape() {}
};


class Rectangle : public Shape {
private:
    int length;
    int width;

public:
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

   
    void area() override {
        cout << "Rectangle Area = " << length * width << endl;
    }
};
int main() {
    Rectangle rect(7, 7);  
    cout << "New area is: ";
    rect.area();
    return 0;
}
 
