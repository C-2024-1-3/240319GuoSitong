//student.h                (����ͷ�ļ����ڴ��ļ��н����������)
class Student              //������
{
public:       //���ó�Ա����ԭ������
	void display();
	void set_value(int n1, const char* name, char n3);

private:
	int num;
	char name[20];
	char sex;

};