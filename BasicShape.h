#pragma once

#include <string>
using namespace std;

// The BasicShape class is an abstract base class for different shapes. 
// It contains two private instance variables: area and name, with getters and setters for these variables. 
// The class also declares a pure virtual function calcArea that will be implemented by derived classes.

class BasicShape {
private:
	double area; //area of the shape
	string name; //name of the shape

public:
	//Constructor
	BasicShape(string = ""); 

	//Getters
	double getArea() const { return area; }
	string getName() const { return name; }   

	//Setters
	void setName(string);
	void setArea(double);

	//pure virtual function
	virtual void calcArea() = 0;

	// Virtual destructor 
	virtual ~BasicShape() = default;

};