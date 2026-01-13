//student.cpp                     在此文件中进行函数的定义
#include <iostream>
#include "student.h"//不要漏写此行，否则编译通不过
using namespace std;
void Student::display()         //在类外定义display类函数
{
    cout << "num:" << m_num << endl;
    cout << "name:" << m_name << endl;
    cout << "sex："<< m_sex << endl;
}
void Student::set_value(int num,const char name[], char sex)
{
	m_num = num;
	for (int i = 0; i < 20; i++)
	{
		m_name[i] = name[i];
	}
	m_sex = sex;
}