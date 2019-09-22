#include <iostream>
using namespace std;
int main() {
	double A, x;
	cout << "Enter A" << endl;
	cin >> A;
	x = A * A;
	x = x * x;
	x = x * x;
	cout << "A^(8)=" << x << endl;
	return 0;
}