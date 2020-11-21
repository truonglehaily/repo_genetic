#include <iostream>
#include "MyMatrix.h"

using namespace std;

int MyMatrix::nmatrix = 0;

int main(int argc, char** argv) {
	MyMatrix M(3, 4);
	M.Set(1, 1, 9);
	cout << M;
	cout << "Number of matrix: " << M.nmatrix << endl;
	
	MyMatrix N(2, 5);
	N.Set(1, 2, 9);
	cout << "Number of matrix: " << M.nmatrix << endl;
	cout << "Number of matrix: " << N.nmatrix << endl;
	
	return 0;
}
