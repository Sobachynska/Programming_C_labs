#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "ukr");
	//const int n = 3;
	int B[10][10], n, m, j, i;
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
			cout << B[i][j] << " ";
		cout << "\n ";
	}
	
	int C[10];
	int Sum;
	for (int j = 0; j < n; j++) {
		Sum = 0;
		for (int i = 0; i < n; i++) {
			Sum += B[i][j];
		};
		C[j] = Sum;

		cout << C[j] << " ";
	};

}