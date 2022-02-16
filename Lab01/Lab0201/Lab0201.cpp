#include <cmath>
#include <iostream>

using namespace std;

int main()
{ 
	setlocale (LC_CTYPE, "ukr");
	float gal, benz, gal1, l, all;
	gal = 12776;
	benz = 45;
	gal1 = 3.7854;
	l = 100;
	all = (((gal * gal1) / 100) * 45);
	cout << "all = " << all;

}
