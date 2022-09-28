//#include <iostream>
//#include <memory>
//
//class Widget {
//public:
//	Widget() {
//		std::cout << "Creating a widget (" << reinterpret_cast<uintptr_t>(this) << ")\n";
//	}
//	~Widget() {
//		std::cout << "Destroying a widget (" << reinterpret_cast<uintptr_t>(this) << ")\n";
//	}
//};
//
//int main() {
//	auto p = std::make_shared<Widget>();
//	std::cout << p.use_count() << '\n'; // prints 1
//	auto q = p;
//	std::cout << p.use_count() << '\n'; // prints 2
//	auto r = p;
//	std::cout << p.use_count() << '\n'; // prints 3
//	r = nullptr;
//	std::cout << p.use_count() << '\n'; // prints 2
//	q = nullptr;
//	std::cout << p.use_count() << '\n'; // prints 1
//	p = nullptr;
//	std::cout << p.use_count() << '\n'; // prints 0
//}