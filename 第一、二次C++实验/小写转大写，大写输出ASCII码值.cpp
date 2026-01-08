#include <iostream>
using namespace std;
int main()
{
	char x;
	cout << "请输入一个字符" << endl;
	cin >> x;
	if (x >= 'a' && x <= 'z') {
		x = x - 32;
		cout << "转换后的大写字符:" << x << endl;
	}
	else {
		int y = static_cast<int>(x) + 1;
		cout << "该字符的后继字符ASCII码：" << y << endl;
	}
	return 0;
}
