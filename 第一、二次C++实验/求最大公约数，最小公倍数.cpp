#include <iostream>
using namespace std;
int main()
{
	int x, y;
	int a = 0, b = 0, c = 0, d = 0;
	cout << "请输入两个正整数：" << endl;
	cin >> x >> y;
	a = x > y ? x : y;
	b = x > y ? y : x;
	while (a % b != 0)
	{
		c = (a % b);
		a = b;
		b = c;
	}
	cout << "最大公约数是：" << b << endl;
	d = x * y / b;
	cout << "最小公倍数是：" << d << endl;
	return 0;

}
