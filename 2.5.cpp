#include <iostream>
using namespace std;
int main()
{
    int EhgCount = 0;  //Ӣ��
    int spaceCount = 0;  // �ո�
    int mathCount = 0;  // ����
    int otherCount = 0;  // ����
    char c;
    while ((c = getchar()) != '\n')
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            EhgCount++;
        }
        else if (c == ' ')
        {
            spaceCount++;
        }
        else if (c >= '0' && c <= '9')
        {
            mathCount++;
        }
        else
        {
            otherCount++;
        }
    }
    cout << "Ӣ����ĸ�ĸ�����" << EhgCount << endl;
    cout << "�ո�ĸ�����" << spaceCount << endl;
    cout << "�����ַ��ĸ�����" << mathCount << endl;
    cout << "�����ַ��ĸ�����" << otherCount << endl;
    return 0;
}