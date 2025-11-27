#include <iostream>
using namespace std;
int main()
{
	const double m = 0.8;
	double x = 2,y,z=2,aver,d=1;
	do
	{
		d = d + 1;
		y = x + x;
		z = z + y;
		x = y;
		if (z >= 100)
		{
			z = z - y;
			d = d - 1;
			break;
		}
	} while (1);
	aver = z * m / d;
	cout << aver << '\t' << d <<'\t' << z << endl;
	return 0;
}