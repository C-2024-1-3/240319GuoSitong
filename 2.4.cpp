#include <iostream>
#include <iomanip>
#include<string>
using namespace std;
int main()
{
	int num1, num2, result;
	string op;
	cout << "请输入第一个数字：";
	cin >> num1;
	cout << "请输入运算符(+ - * / %):";
	cin >> op;
	cout << "请输入第二个数字：";
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
				cout << "除数不能为0！" << endl;
			else if (num2 != 0)
				result = static_cast<double>(num1) / num2;
		}
		else if (op == "%")
		{
			if (num2 == 0)
				cout << "除数不能为0！" << endl;
			else if (num2 != 0)
				result = static_cast<int>(num1) % num2;
		}
		cout << "运算结果为：" << result << endl;
	}
	else if (op != "+" || op != "-" || op != "/" || op != "%")
	{
		cout << "非法运算符！" << endl;
	}
	return 0;
}