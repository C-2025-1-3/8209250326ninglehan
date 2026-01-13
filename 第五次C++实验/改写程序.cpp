#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int m_hour;
	int m_minute;
	int m_sec;
public:
	void SetTime(int hour,int minute,int sec)
	{
		m_hour = hour;
		m_minute = minute;
		m_sec = sec;
	}
	void GetTime()
	{
		cout << m_hour << ":" << m_minute << ":" << m_sec << endl;
	}
};
int main()
{
	Time t1;           //定义t1为Time类对象
	t1.SetTime(7,56,40);      //输入设定的时间 
	t1.GetTime();
	return 0;
}