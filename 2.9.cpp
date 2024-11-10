#include <iostream>
using namespace std;
int main()
{
    int day = 1;
    int apples = 2;
    double total_apples = 2;
    double cost = 0;

    while (total_apples <= 100)
    {
        cost += apples * 0.8;
        day++;
        apples *= 2;
        total_apples += apples;
    }

    double average_cost = cost / (day - 1);
    cout << "每天平均花费：" << average_cost << "元" << endl;

    return 0;
}