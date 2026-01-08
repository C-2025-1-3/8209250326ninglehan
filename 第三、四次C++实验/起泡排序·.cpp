#include <iostream>
using namespace std;
void bubblesort(double list[],int listSize)
{
	bool changed = true;
	do {
		changed = false;
		for (int j = 0; j < listSize - 1; j++)
		{
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
		}
	} while (changed);
}
int main()
{
	const int size = 10;
	double a[size];
	cout << "请输入10个数字：" << endl;
	for (int i = 0; i < 10; i++)
		cin >> a[i];
	bubblesort(a,size);
	cout << "冒泡排序后结果为" << endl;
	for (int i = 0; i < 10; i++)
		cout << a[i] << '\t';
	return 0;
}