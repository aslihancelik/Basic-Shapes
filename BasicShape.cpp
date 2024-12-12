#include "BasicShape.h"


BasicShape::BasicShape(string name){
	setName(name);
	setArea(0.0);
}

void BasicShape::setName(string name){
	this->name = name;

}

void BasicShape::setArea(double area) {
	this->area = area;
}