#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{
	int num1, num2, result;
	string op;
	cout << "�������һ�����֣�";
	cin >> num1;
	cout << "�����������(+ - * / %):";
	cin >> op;
	cout << "������ڶ������֣�";
	cin >> num2;
	if (op == "+" || op == "-" || op == "/" || op == "%")
	{
		if (op == "+")
		{
			result = num1 + num2;
		}
		else if (op == "-")
		{
			result = num1 - num2;
		}
		else if (op == "*")
		{
			result = num1 * num2;
		}
		else if (op == "/")
		{
			if (num2 == 0)
				cout << "��������Ϊ0��" << endl;
			else if (num2 != 0)
				result = static_cast<double>(num1) / num2;
		}
		else if (op == "%")
		{
			if (num2 == 0)
				cout << "��������Ϊ0��" << endl;
			else if (num2 != 0)
				result = static_cast<int>(num1) % num2;
		}
		cout << "������Ϊ��" << result << endl;
	}
	else if (op != "+" || op != "-" || op != "/" || op != "%")
	{
		cout << "�Ƿ��������" << endl;
	}
	return 0;
}