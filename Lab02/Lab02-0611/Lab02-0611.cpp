#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double sum,  i , z;
	int n;
	cin >> n;
	sum = 0;
	z = 0;
	for (i = 1; n>=i; n--)
	{
		z = z + sin(i);
		sum = sum + 1 / z;

	}
	cout << sum;

		return 0;
}

	
