#include<cmath>
#include<iostream>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	float z1, z2, alf;
	cout << "Ввести альфа";
	cin >> alf;
	z1 = cos(alf) + cos(2 * alf) + cos(6 * alf) + cos(alf) + cos(7 * alf);
	z2 = (4 * cos(alf / 2)) * (cos(5 / 2 * alf)) * (cos(4 * alf));
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2;
}