
#include "Circle.h"

// Define PI if it's not defined 
#ifndef PI 
	#define PI 3.14159265358979323846
#endif

Circle::Circle(double x, double y, double r, string n):BasicShape(n){ //do we need basic shape here???

	setName(n);
	calcArea();
}

void Circle::calcArea() {
	double area = PI * radius * radius;
	setArea(area);
}