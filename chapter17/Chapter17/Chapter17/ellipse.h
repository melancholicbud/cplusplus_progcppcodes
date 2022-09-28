#pragma once
#ifndef ELLIPSE_H_
#define ELLIPSE_H_

#include "shape.h"

class Ellipse : public Shape {
protected:
	double major_radius; // the longer radius of the ellipse
	double minor_radius; // the shorter radius of the ellipse
public:
	Ellipse(double major, double minor);
	double span() const override;
	double area() const override;
};

#endif // !1

