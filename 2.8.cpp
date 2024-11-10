#include <iostream>
using namespace std;
int main()
{
    double a;
    cout << "请输入一个正数a：";
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
        cout << "a的平方根是：" << x_1 << endl;
    }
    else if (a == 0)
    {
        cout << "a的平方根是：" << 0 << endl;
    }
    else if (a < 0)
    {
        cout << "负数没有平方根！"  << endl;
    }
    return 0;
}