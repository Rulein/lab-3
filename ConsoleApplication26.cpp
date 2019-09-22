#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x, y;
	cout << "Enter x" << endl;
	cin >> x;
	y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
	cout << "y=" << y << endl;
	return 0;
}
