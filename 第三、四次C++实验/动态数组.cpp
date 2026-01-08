#include <iostream>
using namespace std;
void sOrt(int* p, int length)
{
	for (int x = 0; x < length - 1; x++)
	{
		for (int j = 0; j < length - x - 1; j++)
		{
			if (p[j] > p[j + 1])
			{
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int i;
	cout << "请输入数组元素个数：" << endl;
	cin >> i;
	if (i <= 0)
	{
		cout << "数组元素个数必须大于0。" << endl;
		return 0;
	}
	int *arr = new int[i];
	cout << "请输入" << i << "个整数：" << endl;
	for (int j = 0; j < i; j++)
	{
		int k;
		cin >> k;
		arr[j] = k;
	}
	cout << "排序前：";
	int* p = arr;
	for (int j = 0; j < i; j++)
	{
		cout << p[j] << '\t';
	}
	cout << endl;
	sOrt(arr, i);
	cout << "排序后：";
	p = arr;
	for (int j = 0; j < i; j++)
	{
		cout << p[j] << '\t';
	}
	cout << endl;
	delete[]arr;
	p = nullptr;
	return 0;
}