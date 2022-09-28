//#include <string>
//#include <vector>
//#include <iostream>
//
//#include "alttext2.h"
//
//int main() {
//	std::vector<AltText2> texts{ {TextType::Plain, "Wow"}, {TextType::Fancy, "Wee", "[", "]", "-"},
//		{TextType::Fixed}, {TextType::Bounded, "XYZ", 5}, {TextType::Fancy, "Whoa", ":", ":", ":"} };
//	for (auto t : texts)
//		std::cout << t.get() << '\n';
//	for (auto& t : texts) {
//		t.append("A");
//		t.append("B");
//		t.append("C");
//		t.append("D");
//		t.append("E");
//		t.append("F");
//	}
//	for (auto t : texts)
//		std::cout << t.get() << '\n';
//}