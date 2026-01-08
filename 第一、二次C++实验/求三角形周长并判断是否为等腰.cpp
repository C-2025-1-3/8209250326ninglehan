#include<iostream>
using namespace std;
int main()
{
	float x, y, z,c;
	cout << "请输入三角形的三边:" << endl;
	cin >> x >> y >> z;
	if (x + y > z && x + z > y && y + z > x && x - y < z && x - z < y && y - z < x)
	{
		c = x + y + z;
		cout << "该三角形的周长为" << c << endl;
		if (x == y || y == z || x == z)
		{
			cout << "这是等腰三角形" << endl;
		}
		else cout << "这不是等腰三角形" << endl;
	}
	else cout << "这三边不能构成三角形" << endl;
	return 0;
}
