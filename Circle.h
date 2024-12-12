#pragma once
#include "BasicShape.h"

//This file contains the declaration of the Circle class, which is derived from the abstract base class BasicShape.
//It includes private instance variables for the circle's center coordinates and radius, along with a constructor 
//and the declaration of the calcArea function override to calculate and store the area of the circle.

class Circle : public BasicShape {

private:
	double xCenter;  // X coordinate of the circle's center
	double yCenter;  // Y coordinate of the circle's center
	double radius;   // Radius of the circle

public:

	//Constructor
	Circle(double, double, double, string = "Circle"); //should i add the constructor for basicshape //4. parameter ne

	// Overrides the pure virtual function from BasicShape
	// Calculates the area of the circle
	// Then calls the base class setArea function to store the area in the base class instance variable
	void calcArea() override;

	//Getters
	double getXCenter() const { return xCenter; }
	double getYCenter() const { return yCenter; }
	double getRadius() const { return radius; }

};