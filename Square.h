#pragma once
#include "Rectangle.h"
#include <string>
#include <iostream>
using namespace std;

class Square : public Rectangle {

private:
	double side;

public:
	//constructor
	Square(double, string = "Square"); //invoke the constructor of its base class

	//getter
	double getSide() const { return side; }

};