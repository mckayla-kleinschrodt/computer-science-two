#include <iostream>

using namespace std;

int gcd(int m, int n)
{
	if (m == 0)
		return n;
	else if (n == 0)
		return m;
	else
		return gcd(n % m, m);
}

int main()
{
	cout << "gcd = " << gcd(1256636, 1630968) << endl;
	cout << "gcd = " << gcd(10, 12) << endl;
	cout << "gcd = " << gcd(144, 12) << endl;
	cout << "gcd = " << gcd(9843, 857302) << endl;
	cout << "gcd = " << gcd(94, 86) << endl;
	return 0;
}