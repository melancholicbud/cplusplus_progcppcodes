/* #include <iostream>
using namespace std;

bool find_char(const char* s, char ch) {
	while (*s != '\0') { // scan until we see the null character
		if (*s == ch)
			return true; // found the matching character
		s++; // advance to the next position within the string
	}
	return false;
}

int main() {
	const char* phrase = "this is a phrase";
	// try all the characters a through z
	for (char ch = 'a'; ch <= 'z'; ch++) {
		cout << '\'' << ch << '\'' << " is ";
		if (!find_char(phrase, ch))
			std::cout << "NOT ";
		cout << "in " << '\"' << phrase << '\"' << '\n';
	}
}
*/