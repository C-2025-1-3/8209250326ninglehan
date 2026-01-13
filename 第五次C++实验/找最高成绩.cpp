#include <iostream>
using namespace std;
class Student
{
private:
	int m_num;
	int m_score;
public:
	Student(int num, int score)
	{
		m_num = num;
		m_score = score;
	}
	int getnum()
	{
		return m_num;
	}
	int getsco()
	{
		return m_score;
	}
};
void max(Student *p)
{
	Student* pMax = p;
	int maxsco = p->getsco();
	for (int i = 0; i < 5; i++)
	{
		int nowsco = (p + i)->getsco();
		if (nowsco > maxsco)
		{
			maxsco = nowsco;
			pMax = p + i;
		}
	}
	cout << "Student with id = " << pMax->getnum() << " has the highest score = " << pMax->getsco() << endl;
}
int main()
{
	Student arr[5]{ Student(01,60),Student(02,70), Student(03,80), Student(04,90), Student(05,100), };
	max(arr);
	return 0;
}