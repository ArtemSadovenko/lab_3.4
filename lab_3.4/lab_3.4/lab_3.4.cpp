#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double r;

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "r = "; cin >> r;


	if ((y >= x && pow(y + r, 2) <= r*r -pow(x+r,2)) || ((y <= x && pow(y - r, 2) <= r * r - pow(x - r, 2)))) {
		cout << "yes";
	}
	else {
		cout << "no";
	}

	return 0;
}