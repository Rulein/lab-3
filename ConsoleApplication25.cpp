#include <iostream>
using namespace std;
int main() {
	double A, B, C;
	cout << "Enter A" << endl;
	cin >> A;
	cout << "Enter B" << endl;
	cin >> B;
	cout << "Enter C" << endl;
	cin >> C;
	A = A + B + C;
	C = A - B - C;
	B = A - B - C;
	A = A - B - C;
	cout << "A=" << A << endl;
	cout << "B=" << B << endl;
	cout << "C=" << C << endl;
	return 0;
}
