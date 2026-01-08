#include <iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	double x, y, a;
	cin >> a;
	if (a < 0)
	{
		cout << "输入的数小于零，实数范围内不存在平方根" << endl;
	}
	if (a == 0)
	{
		cout << "0的平方根是0" << endl;
	}
	x = a;
	do
	{
		y = 0.5 * (x + a / x);
		if (fabs(y - x) < 1e-5)
		{
			break;
		}
		x = y;
	} while (1);
	cout << a << " 的平方根是" << fixed << setprecision(5) << y << endl;
	return 0;
}
/*可以将精度改为1e-10*/
