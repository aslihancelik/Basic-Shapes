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
	//pure virtual function

	//static calcArea

};