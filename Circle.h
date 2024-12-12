#pragma once
#include "BasicShape.h"

class Circle : public BasicShape {

private:
	double xCenter;
	double yCenter;
	double radius;

public:

	//constructor

	Circle(double, double, double, string = "Circle"); //should i add the constructor for basicshape //4. parameter ne

	//calculates the area of the circle
	//then calls the base class setArea function to store the area in the base class instance variable
	void calcArea() override;

	//getters

	double getXCenter() const { return xCenter; }
	double getYCenter() const { return yCenter; }
	double getRadius() const { return radius; }

};