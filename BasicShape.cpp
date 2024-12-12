#include "BasicShape.h"

// Implementation of the BasicShape class, including its constructor and setter functions. 
// This class is as an abstract base class for different shapes, providing common functionality 
// for setting and getting the name and area of a shape.


// Constructor for BasicShape class
BasicShape::BasicShape(string name){
	setName(name);    // Initialize name using the setter
	setArea(0.0);     // Initialize area to 0.0
}

// Setter for name
void BasicShape::setName(string name){
	this->name = name;

}
// Setter for area
void BasicShape::setArea(double area) {
	this->area = area;
}