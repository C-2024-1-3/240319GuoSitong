//main.cpp                      主函数模块
#include <iostream>
#include "student.h"
int main()
{
    Student stud;                //定义对象
   
            //执行stud对象的display函数
    stud.set_value(007, "tcg", 'm');
    stud.display();
    return 0;
}