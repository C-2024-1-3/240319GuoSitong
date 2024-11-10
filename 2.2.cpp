#include <iostream>
using namespace std;
int main()
{
	double x, y;
	cout << "x=";
	cin >> x;
	if (x < 1 && x>0)
		y = 3 - 2 * x;
	else if (x >= 1 && x < 5)
		y = 2 / (4 * x) + 1;
	else if (x >= 5 && x < 10)
		y = x * x;
	cout << "x=" << x << ",y=" << y << endl;
	return 0;
}