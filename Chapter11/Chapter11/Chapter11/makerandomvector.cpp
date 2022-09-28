/* #include <iostream>
#include <vector>
#include <cstdlib> // for rand
using std::vector;
using namespace std;
*/
/*
* print (v)
*	Prints the contents of an int vector
*	v is the vector to print
*/
/*void print(const vector<int>& v) {
	for (int elem : v)
		cout << elem << " ";
	cout << '\n';
}
*/
/*
* make_random(v)
*	Fills an int vector with pseudorandom numbers
*	v is the vector to fill; v is modified
*	size is the maximum size of the vector
*/
/*
void make_random(vector<int>& v, int size) {
	v.clear(); // empties the contents of vector
	int n = rand() % size + 1; // random size for v
	for (int i = 0; i < n; i++)
		v.push_back(rand()); // populate with random values
}


int main() {
	srand(2); // set pseudorandom number generator seed
	vector<int> list;
	// print the contents of the vector
	cout << "Vector initially: ";
	print(list);
	make_random(list, 20);
	cout << "1st random vector: ";
	print(list);
	make_random(list, 5);
	cout << "2nd random vector: ";
	print(list);
	make_random(list, 10);
	cout << "3rd random vector: ";
	print(list);
}
*/