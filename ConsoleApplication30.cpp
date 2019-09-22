#include <iostream>
using namespace std;
int main() {
	double A, x, y;
	cout << "Enter A" << endl;
	cin >> A;
	x = A * A;  // x= A^(2) //
	y = x * A;  // y= A^(2)*A = A^(3) //
	x = x * y;  // x= A^(2)*A^(3) = A^(5) //
	y = x;      // y=A^(5) //
	x = y * y;  // x= A^(5)*A^(5) = A^(10)//
	x = x * y;  // x= A^(5)*A^(10) = A^(15)//
	cout << "A^(15)=" << x << endl;
	return 0;
}