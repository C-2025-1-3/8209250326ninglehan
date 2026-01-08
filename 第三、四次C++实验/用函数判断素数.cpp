#include <iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)return false;
	if (num == 2)return true;
	for (int i = 2; i <= num - 1; i++)
		if (num % i == 0)return false;
	return true;
}

int main()
{
	int count = 0;
	int num = 0;
	while (count < 200) {
		if (is_prime(num)) {
			count++;
			cout << num << '\t';
			if (count % 10 == 0) cout << endl;
		}
		num++;
	}
	return 0;
}