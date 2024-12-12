#pragma once

#include <iostream>
#include <string>
using namespace std;

class BasicShape {
private:
	double area;
	string name;

public:
	//constructor
	BasicShape(double = 0.0, string = "");

	//Getters

	//Setters
	void setName(string);

	void setArea(double);

	//pure virtual function
	virtual void = 0;

	//static calcArea

};