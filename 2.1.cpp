#include <iostream>
using namespace std;
int main()
{
	char a;
	cout << "������һ���ַ�" << endl;
	cin >> a;
	if (islower(a))
	{
		cout << (char)toupper(a) << endl;
	}
	else
	{
		cout << (int)(a + 1) << endl;
	}
	return 0;
}