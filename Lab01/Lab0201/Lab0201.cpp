#include <cmath>
#include <iostream>

using namespace std;

int main()
{ 
	setlocale(LC_CTYPE, "ukr");
	float gal, benz, g, l, all;
	gal = 12776;
	benz = 45;
	g = 3.7854;
	l = 100;
	all = (((gal * g) / 100) * 45);
	cout << "all=" << all;

}
