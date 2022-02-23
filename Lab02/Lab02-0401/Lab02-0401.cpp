#include <iostream>
#include<cmath>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float F;
	float a;
	cout << "Введiть a ";
	cin >> a;
	float b;
	cout << "Введiть b ";
	cin >> b;
	float c;
	cout << "Введiть c ";
	cin >> c;
	float x;
	cout << "Введiть x ";
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
