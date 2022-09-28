/* 
#include <iostream>
#include <vector>
using std::vector;
using namespace std;

int main() {
	const int SIZE = 3;
	vector<int> a{ 5 , 5, 5 };
	// print the contents of the vector
	cout << "a containts";
	for (int i = 0; i < SIZE; i++)
		cout << a.at(i) << " ";
	cout << '\n';
	// change all the 5s in vector a to 8s
	for (int i = 0; i <= SIZE; i++) // bug: <= should b <
		a.at(i) = 8;
	cout << "a containts";
	for (int i = 0; i < SIZE; i++)
		cout << a.at(i) << " ";
	cout << '\n';
}
*/