#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "请输入x的值" << endl;
	cin >> x;
	if (x < 1 && x>0)
	{
		x = 3 - 2 * x;
		cout << "结果为：" << x << endl;
	}
	if (x >= 1 && x < 5) 
	{
		x = 2 / 4 * x + 1;
		cout << "结果为:" << x << endl;
	}
	if (x >= 5 && x < 10)
	{
		x = x * x;
		cout << "结果为:" << x << endl;
	}
	return 0;
}