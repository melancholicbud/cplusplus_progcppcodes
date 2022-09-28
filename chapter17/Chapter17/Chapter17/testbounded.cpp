//#include <vector>
//#include <iostream>
//#include "text.h"
//#include "fancytext.h"
//#include "fixedtext.h"
//#include "boundedtext.h"
//
//int main() {
//	std::vector<Text*> texts{ new Text("Wow"),
//	new FancyText("Wee", "[", "]", "-"),
//	new FixedText,
//	new BoundedText("XYZ", 5),
//	new FancyText("Whoa", ":", ":", ":") };
//	for (auto t : texts)
//		std::cout << t->get() << '\n';
//	for (auto& t : texts) {
//		t.append("A");
//		t.append("B");
//		t.append("C");
//		t.append("D");
//		t.append("E");
//		t.append("F");
//	}
//	for (auto t : texts)
//		std::cout << t->get() << '\n';
//	// clean up memory
//	for (auto t : texts)
//		delete t;
//}