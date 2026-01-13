#include<iostream>
using namespace std;
class Point
{
public:
	Point(int x, int y)
	{
		m_x = x;
		m_y = y;
	}
	void setPoint(int i, int j)
	{
		m_x += i;
		m_y += j;
	}
	void display()
	{
		cout << "The revised coordinate value is : (" << m_x << " , " << m_y << ")" << endl;
	}
private:
	int m_x;
	int m_y;
};
int main()
{
	Point p1(60, 80);
	p1.setPoint(20, 20);
	p1.display();
}