// Basic Shapes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include "Circle.h"
#include "Rectangle.h"
#include "Square.h"
using namespace std;

int main() {
    // Create objects
    Circle c1(1.0, 0.0, 6.0, "First Circle");
    Circle c2(2.0, 2.0, 7.0, "Second Circle");
    Rectangle r1(4.0, 5.2, "First Rectangle");
    Rectangle r2(3.0, 9.0, "Second Rectangle");
    Square s1(4.0, "First Square");

    // Store them in an array of BasicShape pointers
    vector<BasicShape*> shapes = { &c1, &c2, &r1, &r2, &s1 };

    cout << fixed << setprecision(2);

    // Display each shape's name and area
    for (BasicShape* shape : shapes) {
        cout << shape->getName() << ": " << shape->getArea() << endl;
    }

    return 0;
}

