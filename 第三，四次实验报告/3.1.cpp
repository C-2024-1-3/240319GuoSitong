#include<iostream>
using namespace std;
int yue(int a, int b)
{
	while (b != 0)
	{
		int mo = b;
		b = a % b;
		a = mo;
	}
	return a;
}
void yueAndyin(int m, int n, int& yin)
{
	int zuiyue = yue(m, n);
	yin = (m * n) / zuiyue;
}
int main()
{
	int m, n;
	cout << "请输入两个自然数：";
	cin >> m >> n;
	int zuiyue = yue(m, n);
	cout << "最大公约数是：" << zuiyue << endl;
	int yin;
	yueAndyin(m, n, yin);
	cout << "最小公倍数为：" << yin << endl;
	return 0;