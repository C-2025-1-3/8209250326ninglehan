#include <iostream>
using namespace std;
int eat(int n)
{
	int t;
	if (n == 10)
		t = 1;
	else
		t = (eat(n + 1) + 1) * 2;
	return (t);
}
int main()
{
	cout<<"第一天猴子共摘了" << eat(1) <<"个桃子"<< endl;
	return 0;
}