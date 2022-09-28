//#include <string>
//#include <vector>
//#include <iostream>
//
//#include "alttext.h"
//
//int main() {
//	std::vector<AltText> texts{ {TextType::Plain, "Wow"}, {TextType::Fancy, "Wee", "[", "]", "-"},
//		{TextType::Fixed}, {TextType::Fancy, "Whoa", ":", ":", ":"} };
//	for (auto t : texts)
//		std::cout << t.get() << '\n';
//	for (auto& t : texts) {
//		t.append("A");
//		t.append("B");
//		t.append("C");
//	}
//	for (auto t : texts)
//		std::cout << t.get() << '\n';
//}