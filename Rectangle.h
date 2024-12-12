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

	//overriding the pure virtual function
};