#include <iostream>
using namespace std;
int main() {
	double A, B;
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter B" << endl;
	cin >> B;
	A = A + B;
	B = A - B;
	A = A - B;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	return 0;
}