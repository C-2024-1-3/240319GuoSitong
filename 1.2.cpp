#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	int r, h;
	cout << "请输入圆锥的半径和锥高：" << endl;
	cin >> r >> h;
	int V = (static_cast<double>(1) / 3) * pi * r * r * h;
	cout << "此圆锥的体积是：" << V << endl;
	return 0;
}