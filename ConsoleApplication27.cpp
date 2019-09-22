#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x, y;
	cout << "Enter x" << endl;
	cin >> x;
	y = 4 * pow(x - 3, 6) - 7 * pow(x - 3, 3) + 2;
	cout << "y=" << y << endl;
	return 0;
}