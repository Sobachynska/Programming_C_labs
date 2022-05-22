#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ukr");
	int j, i,n,m, x,M[10][10];
	cout << "Введiть кiлькiсть рядкiв i стовпцiв квадратної матрицi: ";
	cin >> m >> n;
	if (m != n)
	{
		cout << "Матриця повинна бути квадратна!";
		exit(0);
	}
	for (i = 0; i < n; i++) 
	{
		for (j = 0; j < n; j++) 
		{
			M[i][j] = rand() % 15;
		}
	}
	cout << "Матриця:";
	cout << "\n";
	for (i = 0; i < n; i++) {

		for (j = 0; j < n; j++) {

			cout << M[i][j] << " ";
		}
		cout << "\n";
	}
	int c = 9;
	x = 1;
	cout << "Елементи бiчної дiагоналi, якi меншi 9:";

	cout << "\n";

	for (i = 0; i < n; i++) {

		for (i = 0; i < n; i++) {

			if (M[i][n - 1 - i] < c) {

				x = x * M[i][n - 1 - i];

				cout << M[i][n - 1 - i] << " ";

			};

		}

	}

	cout << "\n";
	cout << "Добуток елементiв бiчної дiагоналi:";
	cout << "\n";
	cout << x;
	cout << "\n";
	return 0;
}