#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	float F;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> F;
	float C = (F - 32.00) * 5.00 / 9.00;
	cout << "��Ӧ�������¶�Ϊ��" << fixed << setprecision(2) << C << endl;
	return 0;
}