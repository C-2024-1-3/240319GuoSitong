#include <iostream>
using namespace std;
int main()
{
    int EhgCount = 0;  //英文
    int spaceCount = 0;  // 空格
    int mathCount = 0;  // 数字
    int otherCount = 0;  // 其它
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
    cout << "英文字母的个数：" << EhgCount << endl;
    cout << "空格的个数：" << spaceCount << endl;
    cout << "数字字符的个数：" << mathCount << endl;
    cout << "其它字符的个数：" << otherCount << endl;
    return 0;
}