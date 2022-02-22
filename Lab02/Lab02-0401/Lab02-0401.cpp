#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float F;
	float a;
	cout << "Введіть a ";
	cin >> a;
	float b;
	cout << "Введіть b ";
	cin >> b;
	float c;
	cout << "Введіть c ";
	cin >> c;
	float x;
	cout << "Введіть x ";
	cin >> x;
	if ((x < 0 and b != 0)) {
		F = (a * pow(x, 2) + b);
	}
	else if ((x > 0) and (b = 0)) {
			F = (x - a) / (x - c);
		}
	
		else {
			F = (x / c);
		}
	cout << "F = " << F;
	return 0;
}
