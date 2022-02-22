#include <iostream>
#include <math.h>

using namespace std;

int main() 
{
	setlocale(LC_CTYPE, "ukr");
	int i, n, a;
	a = 2;
	cout << "Введiть цiле число: ";
	cin >> n;
	for (i = 1; i <= n - 1; i++) 
		a *= 2; //*= множення з переприсвоєнням
	cout << "Результат: " << a;
	return 0;
	}