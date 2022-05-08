#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	double z1, z2, x, y,iks, igryk;
	cout << "Введiть x: " ;
	cin >> x ;
	cout << "Введiть y: ";
	cin >> y;

	iks = 2 * x;
	igryk = 2 * y;

	z1 = cos(pow(x, 4)) - cos(pow(y, 2)) + (sin(pow((iks), 2)) / 4);
	z2 = (cos(iks) / 2) - (cos(igryk) / 2);
	cout << "z1= " << z1 << endl;
	cout << "z2= " << z2;

    return 0;
}