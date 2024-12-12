#include "Rectangle.h"

// This file contains the implementation of the Rectangle class, including its constructor and the implementation 
// of the calcArea function.The Rectangle class is derived from the abstract base class BasicShape.

// Constructor implementation for the Rectangle class 
// Initializes the rectangle's length, width, and name 
// Calls the base class constructor to set the name
Rectangle::Rectangle(double l, double w, string n) :BasicShape(n), length(l), width(w) {
	setName(n);
	calcArea(); // Calculate area after initializing member variables
}

// Implementation of the pure virtual function calcArea declared in BasicShape 
// Calculates the area of the rectangle and stores it in the base class's area variable

void Rectangle::calcArea() {
	double area = length * width;
	setArea(area);
}
