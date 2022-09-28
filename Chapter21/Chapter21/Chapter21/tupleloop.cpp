//#include <iostream>
//#include <string>
//#include <vector>
//#include <tuple>
//int main() {
//	// Create a vector than can hold ten tuples
//	std::vector<std::tuple<std::string, int, double>> vec(10);
//	int count = 1;
//	double quant = 10.0;
//	// Populate the vector
//	for (auto& [s, i, d] : vec) {
//		s = "Item #" + std::to_string(count);
//		i = count++;
//		d = quant;
//		quant += 10;
//	}
//	// Print the contents of the vector
//	for (auto [s, i, d] : vec)
//		std::cout << "[" << s << ", " << i << ", " << d << "]\n";
//}