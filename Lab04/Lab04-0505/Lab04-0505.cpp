#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "ukr");
	//const int n = 3;
	int B[10][10], C[10],n, m, j, i, min, max;
	cout << "Введiть кiлькiсть рядкiв i стовпцiв: ";
	cin >> m >> n;
	if (m != n)
	cout << "Введiть елементи таблицi (к-сть рядків * стовпців): ";
	for (i = 0; i < n; i++)
		for (j = 0; j < m; j++)
			cin >> B[i][j];
	cout << "Таблиця: \n ";
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
			cout << B[i][i] << " ";
		cout << "\n ";
	};
	min = max = B[0][0];
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (B[i][j] > max)
				max = B[i][j];
			else(B[i][j] < min);
			min = B[i][j];
			C[i] = min + max;
		}
	}
		cout << C[i] << " ";
	}
