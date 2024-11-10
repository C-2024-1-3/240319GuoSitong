#include<iostream>
using namespace std;
int main()
{
	int e{}, f{}, d{};
	cout << "请输入三角形的三边长度:";
	cin >> e >> f >> d;
	int ZC = e + d + f;
	if (e + f > d && e + d > f && d + f > e)
	{
		cout << "周长为:" << ZC << endl;
		if (e == d || e == f || d == f)
		{
			cout << "这是一个等腰三角形。" << endl;
		}
		else
		{
			cout << "这是一个普通三角形。" << endl;
		}
	}
	else
	{
		cout << "这三条边不能够成三角形。" << endl;
	}
}