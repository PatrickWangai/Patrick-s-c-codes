/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:Calculating Surface Area and Volume of a cylinder.
Date: 05/12/2025
version 1
*/
#include <iostream>
#include <cmath>
using namespace std;


//Creating a class
class Cylinder {
    public:
    double radius;
    double height;
    
    double calculateArea(){
        return 2 * 3.142 * radius * radius + 2 * 3.142 * radius  * height;
    }
    double calculateVolume(){
        return 3.142 * radius * radius * height;
    }
    
};

int main(){
    
    //creating object
    Cylinder cylinder1;
    double area,volume;
    double radius,height;
    
    //Assigning values 
    
    //cylinder1.radius = 7;
    //cylinder1.height = 3;
    
    //prompting the user to enter values
    cout<<"Enter the radius "<<endl;
    cin>>cylinder1.radius;
    
    cout<<"Enter the height "<<endl;
    cin>>cylinder1.height;
    
    area = cylinder1.calculateArea();
    volume = cylinder1.calculateVolume();
    
    //Display output
    cout<<"The Surface Area is"<<area<<endl;
    cout<<"The Volume of the Cylinder is"<<volume<<endl;
    


    return 0;
}