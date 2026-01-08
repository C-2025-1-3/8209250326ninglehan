#include <iostream>
using namespace std;
int main()
{
	int stu = 0;
	bool gui[100];
	for (int i = 0; i < 100; i++)
		gui[i] = false;
	for (int i = 0; i < 100; i++)
	{
		for (int j = stu; j < 100; j += stu + 1)
		{
			gui[j] = !gui[j];
		}
		stu++;
	}
	cout << "开着的柜子号码为：" << endl;
	for(int i=0;i<100;i++)
		if (gui[i] == true)
		{
			cout << i+1 << '\t';
		}
	return 0;

}