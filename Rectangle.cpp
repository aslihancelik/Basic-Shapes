#include "Rectangle.h"

//constructor
Rectangle::Rectangle(double l, double w, string n) :BasicShape(n), length(l), width(w) {
	setName(n);
	calcArea();
}

//overriding the pure virtual function

void Rectangle::calcArea() {
	double area = length * width;
	setArea(area);
}
