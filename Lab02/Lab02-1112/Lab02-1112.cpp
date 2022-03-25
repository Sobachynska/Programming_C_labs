#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long int i, n, f;
	double x, Summ, fact=1;

	cout << "x=";
	cin >> x;

    Summ = sin(x) / x;

	cout << "n=";
	cin >> n;

	f = 2 * n + 1;

	for (int i = 1; i <= f; i++)
	{
		fact *= i;
	}

	for (i = 1; i <= n; i++) 
	{
		Summ = Summ + pow(-1, i ) * pow(x, 2 * i) / (fact);
	}
	cout << Summ << "\n";

}