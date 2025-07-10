#include <iostream>
#include <cmath>
using namespace std;
 class Shape{
 	public:
 		int virtual area(){
		 cout<<"area calculation not defined for generic shape"<<endl;
		
		 
	 }
 		
	 
 };
class Rectangle :public Shape {
	 public:
	 	int length;
	 	int width;
	 	
	 	 int area(){
			 cout<<"length * width"<<endl;
		 }
 };
 
 
 class Circle :public Shape {
 	public:
 		 int radius;
 		 int area(){
			  cout<<"3.142 *radius *radius"<<endl;
		  }
 		
	 
 };
 
