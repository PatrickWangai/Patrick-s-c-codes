/*
Author:Patrick Wangai
Reg No:BSE-01-0052/2025
Description:A program that calculates (-,+,* and /) of numbers using functions.
Date: 05/06/2025
version 1
*/

#include<iostream>
#include <cmath>
using namespace std;

int addition(int x,int y){
    return x + y;
}


int product (int a,int b){
    return a * b;
}


float division(int z,int n){
    return z/n;
}


int subtraction(int c,int d){
    return c - d;
}


int main()
{
    int sum;
    cout<<"Functions in C++ "<<endl;
    sum = addition(10,20);
    cout<<"Sum is :"<<sum<<endl;
    
    
    int output;
    output = product(10,20);
    cout<<"The product is :"<<output<<endl;
    
    
    int outcome;
    outcome = division(10,20);
    cout<<"Division equals to :"<<outcome<<endl;
    
    
    int minus;
    minus = subtraction(10,20);
    cout<<"subtraction is equal to :"<<minus<<endl;

    
    return 0;
}
