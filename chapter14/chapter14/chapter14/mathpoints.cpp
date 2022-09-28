//#include <iostream>
//
//// The Point class defines the structure of software
//// objects that model mathematical, geometric points
//class Point {
//public:
//	double x; // the point's x coordinate
//	double y; // the point's y coordinate
//};
//
//int main() {
//	// declare some point objects
//	Point pt1, pt2;
//	// assign their x and y fields
//	pt1.x = 8.5; // use the dow notation to get to a part of the object
//	pt1.y = 0.0;
//	pt2.x = -4;
//	pt2.y = 2.5;
//	// print them
//	std::cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
//	std::cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
//	// reassign one point from the other
//	pt1 = pt2;
//	std::cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
//	std::cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
//	// are pt1 and pt2 aliases? change pt1's x coordinate and see.
//	pt1.x = 0;
//	std::cout << "pt1 = (" << pt1.x << "," << pt1.y << ")\n";
//	// note that pt2 is unchanged
//	std::cout << "pt2 = (" << pt2.x << "," << pt2.y << ")\n";
//}