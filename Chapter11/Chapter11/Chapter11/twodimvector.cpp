/* #include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
using std::vector;
using Matrix = vector<vector<double>>;

// allow the user to enter the elements of a matrix
void populate_matrix(Matrix& m) {
	cout << "Enter the " << m.size() << " rows of the matrix.\n";
	for (unsigned row = 0; row < m.size(); row++) {
		cout << "Row # " << row << " (enter " << m[row].size() << " values): ";
		for (double& elem : m[row])
			cin >> elem;
	}
}

void print_matrix(const Matrix m) {
	for (auto row : m) {
		for (double elem : row)
			cout << setw(5) << elem;
		cout << '\n';
	}
}

int main() {
	int rows, columns;
	cout << "How many rows? ";
	cin >> rows;
	cout << "How many columns? ";
	cin >> columns;
	// declare the 2D vector
	Matrix mat(rows, vector<double>(columns));
	// populate the vector
	populate_matrix(mat);
	// print the vector
	print_matrix(mat);
}
*/