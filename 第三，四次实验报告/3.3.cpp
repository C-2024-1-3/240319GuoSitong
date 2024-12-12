#include <iostream>
#include <iomanip>
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius\n";
	cout << fixed << setprecision(2);
	for (double c = 40.0; c >= 31.0; c -= 1.0)
	{
		double f = C_to_F(c);
		cout << c << "\t" << f << "\t\t|\t";
		double f1 = 120.0 - (40, 0 - c) * 10;
		double c1 = F_to_C(f1);
		cout << f1 << "\t\t" << c1 << endl;
	}
	return 0;
}