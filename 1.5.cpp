#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float F;
	cout << "请输入华氏温度：" << endl;
	cin >> F;
	float C = (F - 32.00) * 5.00 / 9.00;
	cout << "对应的摄氏温度为：" << fixed << setprecision(2) << C << endl;
	return 0;
}