
#include "Circle.h"

// This file contains the implementation of the Circle class, including its constructor and the implementation 
// of the calcArea function.The Circle class is derived from the abstract base class BasicShape.

// Define PI if it's not defined 
#ifndef PI 
	#define PI 3.14159265358979323846
#endif


// Constructor implementation for the Circle class 
// Initializes the circle's center coordinates, radius, and name 
// Calls the base class constructor to set the name

Circle::Circle(double x, double y, double r, string n):BasicShape(n), xCenter(x), yCenter(y), radius(r) { 

	setName(n);
	calcArea();
}


// Implementation of the pure virtual function calcArea 
// Calculates the area of the circle and stores it in the base class's area variable
void Circle::calcArea() {
	double area = PI * radius * radius;
	setArea(area);
}