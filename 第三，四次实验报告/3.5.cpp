#include <iostream>
#include <iomanip>
using namespace std;
int taozi(int n)
{
	if (n == 10)
	{
		return 1;
	}
	return  (taozi(n + 1) + 1) * 2;
}
int main()
{
	int Ztaozi = taozi(1);
	cout << "���ӵ�һ��һ��ժ��" << Ztaozi << "��" << endl;
	return 0;
}