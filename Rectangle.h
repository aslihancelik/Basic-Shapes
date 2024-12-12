#pragma once
#include <string>
#include "BasicShape.h"
using namespace std;

// The Rectangle class derived from BasicShape 
// It includes private instance variables for the rectangle's length and width, 
// along with a constructor and the declaration of the calcArea function override to calculate 
// and store the area of the rectangle.

class Rectangle : public BasicShape{
private:
	double length;	// Length of the rectangle
	double width;	// Width of the rectangle

public:

	//Constructor
	Rectangle(double, double, string = "Rectangle");

	// Overrides the pure virtual function from BasicShape
	// Calculates the area of the rectangle 
	void calcArea() override;

	//Getters
	double getLength() const { return length; }
	double getWidth() const { return width; }

};