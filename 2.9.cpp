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
    cout << "ÿ��ƽ�����ѣ�" << average_cost << "Ԫ" << endl;

    return 0;
}