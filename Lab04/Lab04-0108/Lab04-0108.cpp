#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	long long int n, a, a1 = 1, a2 = 1, a3 = 2, a4 = 3;

	cin >> n;
	for (int k = 5; k <= n; k++) {
		a = a3 * a4;
		a3 = a4;
		a4 = a;
	}
	cout << a ;

}