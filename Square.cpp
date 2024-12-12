#include "Square.h"

//This file contains the implementation of the Square class, including its constructor.
//The Square class is derived from the Rectangle class and initializes its side length using the base class constructor.


// Constructor implementation for the Square class 
// Initializes the side length and calls the base class constructor with the side length for both length and width
// invoke the constructor of its base class
Square::Square(double s, string n) :Rectangle(s, s, n), side(s){
	setName(n); 
}

