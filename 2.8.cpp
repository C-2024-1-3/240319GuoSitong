#include <iostream>
using namespace std;
int main()
{
    double a;
    cout << "������һ������a��";
    cin >> a;
    double x = a;
    double x_1;
    if (a > 0)
    {
        do
        {
            x_1 = 0.5 * (x + a / x);
            if (abs(x_1 - x) < 1e-5)
                break;
            x = x_1;
        } while (true);
        cout << "a��ƽ�����ǣ�" << x_1 << endl;
    }
    else if (a == 0)
    {
        cout << "a��ƽ�����ǣ�" << 0 << endl;
    }
    else if (a < 0)
    {
        cout << "����û��ƽ������"  << endl;
    }
    return 0;
}