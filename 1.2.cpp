#include <iostream>
using namespace std;
int main()
{
	const double pi = 3.14;
	int r, h;
	cout << "������Բ׶�İ뾶��׶�ߣ�" << endl;
	cin >> r >> h;
	int V = (static_cast<double>(1) / 3) * pi * r * r * h;
	cout << "��Բ׶������ǣ�" << V << endl;
	return 0;
}