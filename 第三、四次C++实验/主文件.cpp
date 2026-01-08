#include <iostream>
#include<iomanip>
using namespace std;
#include "mytemperature.h"

int main()
{
	double cel, fah;
	cout << setprecision(4);
	cout << "Celsius" << '\t' << "Fahrenheit" << '\t' <<"|"<<'\t' << "Fahrenheit" << '\t' << "Celsius" << endl;
	for (int i = 0;i <=9; i++)
	{
		cel = 40.0 - i, fah = 120.0 - i * 10;
		cout << cel << '\t' << celsius_to_fah(cel) << '\t' << '\t' << "|" << '\t' << fah << '\t' << '\t' << fahrenheit_to_cels(fah) << '\t' << endl;
	}
	return 0;
}