//student.cpp                     �ڴ��ļ��н��к����Ķ���
#include <iostream>
#include"student.h"          //��Ҫ©д���У��������ͨ����
using namespace std;
void Student ::set_value(int n1, const char* name, char n3)
{
	num = n1;
	strcpy_s(this->name,sizeof(this->name) ,name);
	sex = n3;
}
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "sex: "<< sex << endl;
}