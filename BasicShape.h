#pragma once

#include <string>
using namespace std;

class BasicShape {
private:
	double area;
	string name;

public:
	//constructor
	BasicShape(double = 0.0, string = ""); //is area not initiated here???????

	//Getters
	double getArea() const { return area; }
	string getName() const { return name; }   ///////??????????????????????????????????????????
	//Setters
	void setName(string);

	void setArea(double);

	//pure virtual function
	virtual void calcArea() = 0;

	// Virtual destructor 
	virtual ~BasicShape() = default

};