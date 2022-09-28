//#include <iostream>
//#include <queue>
//#include <complex>
//using Complex = std::complex<double>;
//// Define priorities for complex numbers.
//// If c1's distance to zero on the complex plain is less
//// than c2's distance to zero, c1 has higher priority than c2.
//struct ComplexCompare {
//	bool operator()(Complex c1, Complex c2) {
//		double a = c1.real(), b = c1.imag(),
//			c = c2.real(), d = c2.imag();
//		return sqrt((a * a + b * b) < (c * c + d * d));
//	}
//};
//int main() {
//	std::priority_queue<Complex, std::vector<Complex>,
//		ComplexCompare> queue;
//	// Insert some complex numbers into the priority queue
//	queue.push({ 3, 2 });
//	queue.push({ 12, 3 });
//	queue.push({ 5, 45 });
//	queue.push({ 11, 5 });
//	queue.push({ 2, 1 });
//	queue.push({ 2.5, 5.4 });
//	// Serve items from the queue until it is empty
//	while (!queue.empty()) {
//		std::cout << queue.top() << ' '; // See what's on top
//		queue.pop(); // Remove highest priority element
//	}
//	std::cout << '\n';
//}