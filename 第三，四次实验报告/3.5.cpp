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
	cout << "猴子第一天一共摘了" << Ztaozi << "个" << endl;
	return 0;
}