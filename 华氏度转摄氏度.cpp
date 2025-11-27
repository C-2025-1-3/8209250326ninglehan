#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	float x, y;
	cout << "此程序用于将华氏温度换算成摄氏温度。" << endl;
	cout << "请输入华氏温度：" << endl;
	cin >> x;
	y = (x - 32) * 5 / 9;
	cout << "对应的摄氏温度为：" <<fixed<<setprecision(2)<< y << endl;
	return 0;
}