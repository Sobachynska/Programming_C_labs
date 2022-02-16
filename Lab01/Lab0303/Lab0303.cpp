#include <cmath>
#include <iostream>

using namespace std;
int main()
{
	setlocale (LC_CTYPE, "ukr");
	cout << "Довжина сторони > Висота" << endl;
	int a;
	cout << "Довжина сторони ";
	cin >> a;
	int h;
	cout << "Висота ";
	cin >> h;
	
	float osn;
	osn = (a * a - h * h);
	float c;
	c = sqrt(osn) * 2;
	float S;
	S = (c * h) / 2;
	cout << "Площа = " << S << endl;
	int r;
	r = (c / 2) * sqrt((a * 2 - c) / (2 * a + c));
	cout << "Радiус = " << r;
}