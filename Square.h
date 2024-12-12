#pragma once
#include "Rectangle.h"
#include <string>
#include <iostream>
using namespace std;

//This file contains the declaration of the Square class, which is derived from the Rectangle class.
//It includes a private instance variable for the side length, along with a constructor and 
//an implementation of getter for the side.

class Square : public Rectangle {

private:
	double side; // Side length of the square

public:
	//Constructor
	Square(double, string = "Square"); 

	//Getter
	double getSide() const { return side; }

};