/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Displaying brand,model,price and mileage of a car
Date: 19/06/2025
version 1
*/
#include <iostream>
using namespace std;


class Car {
    private:
    string brand;
    string model;
    float price;
    int mileage;
    
    
    public:
    Car(string b, string m, float p, int miles) {
        brand = b;
        model = m;
        price = p;
        mileage = miles;
    }
    
    void display() {
        cout << "Car Brand: " << brand << endl;
        cout << "Car Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }
    
    void drive(int distance) {
    mileage = mileage + distance;
    cout << "After driving " << distance << " miles, updated mileage: " << mileage << " miles" << endl;
}
        
        
};

int main() {
    
    Car car1("Toyota", "Corolla", 70000.0, 2000);
    car1.display();
   
    car1.drive(150);

    car1.drive(300);
    
   
    return 0;
}