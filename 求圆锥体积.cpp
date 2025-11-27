#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	const float pi = 3.14;
	cout << "这个程序用于求圆锥体积" << endl;
	cout << "请输入圆锥底的半径" << endl;
	cin >> x;
	cout << "请输入圆锥的锥高" << endl;
	cin >> y;
	z = (((x * x) * pi) * y) / 3;
	cout << "圆锥的体积是" << z << endl;
	return 0;
}