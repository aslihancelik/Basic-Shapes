#pragma once
#include "BasicShape.h"

class Circle : public BasicShape {

private:
	double xCenter;
	double yCenter;
	double radius;

public:

	//constructor

	Circle(double = 0.0, double = 0.0, double = 0.0, string = "Circle"); //should i add the constructor for basicshape //4. parameter ne

	//calculates the area of the circle
	//then calls the base class setArea function to store the area in the base class instance variable
	double calcArea();

	//getters

	double getRadius(); //const nereye

};