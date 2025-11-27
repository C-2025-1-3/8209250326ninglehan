#include<iostream>
using namespace std;
int main()
{
	/*int i = k + 1;            ！这里没有定义k导致错误
	cout << i++ << endl;
	int i = 1;                  ！这里对i进行了重复定义导致错误
	cout << i++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;
	修改后程序见下方*/


	int k = 1;
	int i = k + 1;
	cout << i++ << endl;
	cout << i++ << endl;
	cout << "Welcome to C++!" << endl;
	return 0;
}