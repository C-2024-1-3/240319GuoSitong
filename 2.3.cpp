#include<iostream>
using namespace std;
int main()
{
	int e{}, f{}, d{};
	cout << "�����������ε����߳���:";
	cin >> e >> f >> d;
	int ZC = e + d + f;
	if (e + f > d && e + d > f && d + f > e)
	{
		cout << "�ܳ�Ϊ:" << ZC << endl;
		if (e == d || e == f || d == f)
		{
			cout << "����һ�����������Ρ�" << endl;
		}
		else
		{
			cout << "����һ����ͨ�����Ρ�" << endl;
		}
	}
	else
	{
		cout << "�������߲��ܹ��������Ρ�" << endl;
	}
}