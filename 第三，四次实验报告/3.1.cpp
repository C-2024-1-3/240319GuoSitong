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
	cout << "������������Ȼ����";
	cin >> m >> n;
	int zuiyue = yue(m, n);
	cout << "���Լ���ǣ�" << zuiyue << endl;
	int yin;
	yueAndyin(m, n, yin);
	cout << "��С������Ϊ��" << yin << endl;
	return 0;