#include <iostream>
using namespace std;
int main()
{
	int a[10];
	int temp;
	int count = 0;
	cout << "Enter tem numbers:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> temp;
		bool judge = false;
		for (int j = 0; j < count; j++)
		{
			if (a[j] == temp)
			{
				judge = true;
				break;
			}
		}
		if (!judge)
		{
			a[count] = temp;
			count++;
		}
	}
	for (int i = 0; i < count; i++)
		cout << a[i] << '\t';
	return 0;
}