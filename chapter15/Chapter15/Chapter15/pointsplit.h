#pragma once

class Point {
	double x;
	double y;
public:
	Point(double x, double y); // no construector implementation
	double get_x() const;		// and no method implementation
	double get_y() const;
	void set_x(double x);
	void set_y(double y);
};