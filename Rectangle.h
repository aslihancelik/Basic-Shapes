#pragma once
#include <string>
#include "BasicShape.h"
using namespace std;

class Rectangle : public BasicShape{
private:
	double length;
	double width;

public:

	//constructor
	Rectangle(double, double, string = "Rectangle");

	//override the pure virtual function from BasicShape
	void calcArea() override;

	//getters

	double getLength() const { return length; }
	double getWidth() const { return width; }

};