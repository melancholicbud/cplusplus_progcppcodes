/* #include <iostream>
#include <sstream>
#include <cmath>
using namespace std;

int main(int argc, char* argv[]) {
	if (argc < 3)
		cout << "Supply range of values\n";
	else {
		int start, stop;
		stringstream st(argv[1]), sp(argv[2]);
		st >> start;
		sp >> stop;
		for (int n = start; n <= stop; n++)
			cout << n << " " << sqrt(n) << '\n';
	}
}
*/