#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x;
	double y;
	double r;

	cout << "x = "; cin >> x;
	cout << "r = "; cin >> r;
	cout << "y = "; cin >> y;

	if ((y >= x && y <= sqrt(r*r - pow((x+r),2)) + r) || ((y <= x && y >= sqrt(r * r - pow((x - r), 2) - r)))) {
		cout << "yes";
	}
	else {
		cout << "no";
	}

	return 0;
}