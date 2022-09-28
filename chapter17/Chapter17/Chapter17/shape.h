#pragma once
#ifndef SHAPE_H_
#define SHAPE_H_

/*
*	Shape is the base class for all shapes
*/
class Shape {
public:
	// Longest distance across the shape
	virtual double span() const = 0;
	// the shape's area
	virtual double area() const = 0;
};

#endif // !SHAPE_H_

