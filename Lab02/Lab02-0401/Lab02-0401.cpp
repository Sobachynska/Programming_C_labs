#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float F;
	int a;
	cout << "Введіть a";
	cin >> a;
	int b;
	cout << "Введіть b";
	cin >> b;
	int c;
	cout << "Введіть c";
	cin >> c;
	int x;
	cout << "Введіть x";
	cin >> x;
	if ((x < 0 and b != 0) {
		F = -a * pow(x, 3) - b;
	}
	else if ((x + c) > 0 and a != 0) {
		F = (x - a) / (x - c);
	}
	else {
		F = (x / c) + (c / x);
	}
	cout << "F=" << F;
}