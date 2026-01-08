#include <iostream>
using namespace std;
int find(int x, int y) {
	int a,b,z;
	x > y ? a = x, b = y : b = x, a = y;
	z = a % b;
	while (z != 0) {
		a = b;
		b = z;
		z = a % b;
	}
	return b;
}
void find2(int x, int y,int &res1,int&res2) {
	int a, b, z;
	x > y ? a = x, b = y : b = x, a = y;
	z = a % b;
	while (z != 0) {
		a = b;
		b = z;
		z = a % b;
	}
	res1 = b;
	res2 = x * y / res1;
}

int main()
{
	int x, y;
	cout << "请输入两个自然数：" << endl;
	cin >> x >> y;
	if (x <= 0 || y <= 0)
	{
		cout << "请输入自然数！";
		return 0;
	}
	int res1, res2;
	find2(x, y, res1, res2);
	cout << "这两个数的最大公约数是：" << find(x, y) << endl;
	cout << "这两个数的最大公约数和最小公倍数是：" <<res1<<'\t'<<res2 << endl;
	return 0;
}