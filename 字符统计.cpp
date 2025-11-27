#include<iostream>
using namespace std;
int main()
{
	char c=0;
	int x, y, z, u;
	x = y = z = u = 0;
	cout << "请输入一行字符（以回车结尾）：" << endl;
	while (c != '\n' && cin.get(c))
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			x++;
		}
		else if (c == ' ')
		{
			y++;
		}
		else if (c >= '0' && c <= '9')
		{
			z++;
		}
		else
		{
			u++;
		}
	}
	cout << "英文字母个数：" << x << endl;
	cout << "空格个数：" << y<< endl;
	cout << "数字个数：" << z << endl;
	cout << "其他字符个数：" << u << endl;
	return 0;
}